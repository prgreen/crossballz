require "core"

local g = require "game"
local cp = require "chipmunk"
local ffi = require "ffi"

require "ballz.constants"

local loader = require "ballz.loader"
local renderer = require "ballz.renderer"
local menu = require "ballz.menu"


--local profi = require "utils.profiling"
--profi:start()


-- load a world description (static W.entities from JSON level file)
-- and a chipmunk space (W.objects keeps objects used by space alive)


g.init()


local timer = g.timer(TIMESTEP)
local display = g.display(SCREEN_W, SCREEN_H)

display:title("Ballz")
display:hide_mouse_cursor()
-- TODO set window icon

local event_queue = g.event_queue()

event_queue:register(display:event_source())
event_queue:register(timer:event_source())
event_queue:register(g.mouse_event_source())
event_queue:register(g.keyboard_event_source())

BACKGROUND = g.image(CONTENT_FOLDER .. IMAGE_FOLDER .. DEFAULT_BACKGROUND)
FONT = g.font(CONTENT_FOLDER .. FONT_FOLDER .. DEFAULT_FONT_FILE, 12, 0)
BIG_FONT = g.font(CONTENT_FOLDER .. FONT_FOLDER .. DEFAULT_FONT_FILE, 72, 0)
-- main menu
local game_mode = menu.run(event_queue)
if game_mode ~= "exit" then
for k,v in pairs(game_mode) do
	GAME_MODE = menu.menu_format(k)
	LEVEL_FOLDER = k
end

local get_max_level = function()
	local max_level = 0
	local test_level = g.fs_entry(LEVEL_FOLDER .. DEFAULT_LEVEL_NAME .. (max_level+1) .. LEVEL_EXTENSION)
	while test_level:exists() do
		max_level = max_level + 1
		test_level = g.fs_entry(LEVEL_FOLDER .. DEFAULT_LEVEL_NAME .. (max_level+1) .. LEVEL_EXTENSION)
	end
	return max_level
end
MAX_LEVEL = get_max_level()

-- loading first level
if MAX_LEVEL > 0 then
	print ("Loading level ".. CURRENT_LEVEL)
	W, space = loader.load_level(LEVEL_FOLDER .. DEFAULT_LEVEL_NAME .. CURRENT_LEVEL .. LEVEL_EXTENSION)
end

g.clear()
g.show()

timer:start()
local run = true
if MAX_LEVEL == 0 then 
	print ("No level found for " .. GAME_MODE)
	run = false
end
local redraw = true
local mouse_grab = false
local mouse_body = cp.body(INFINITY, INFINITY)
local mouse_constraint = nil
local keys = {up=false, down=false, left=false, right=false}
local right_click_pos = {x=0, y=0}
local is_right_clicking = false
while run do 
	local ev = event_queue:wait_for_event() 

	if (ev[0].type == g.ALLEGRO_EVENT_TIMER) then
		LEVEL_FRAMES = LEVEL_FRAMES+1
		redraw = true
		-- physics
		space:step(TIMESTEP) 
		-- move camera if arrow keys pressed or right_clicking
		if keys.up then TRANSLATE_Y = TRANSLATE_Y + TRANSLATE_SPEED end
		if keys.down then TRANSLATE_Y = TRANSLATE_Y - TRANSLATE_SPEED end
		if keys.left then TRANSLATE_X = TRANSLATE_X + TRANSLATE_SPEED end
		if keys.right then TRANSLATE_X = TRANSLATE_X - TRANSLATE_SPEED end

		if is_right_clicking then
			local mouse_x = g.get_mouse_x()
			local mouse_y = g.get_mouse_y()

			TRANSLATE_X = TRANSLATE_X + (-right_click_pos.x + mouse_x)/TRANSLATE_MOUSE_FACTOR
			TRANSLATE_Y = TRANSLATE_Y + (-right_click_pos.y + mouse_y)/TRANSLATE_MOUSE_FACTOR
			right_click_pos.x = mouse_x
			right_click_pos.y = mouse_y 
		end

	elseif (ev[0].type == g.ALLEGRO_EVENT_DISPLAY_CLOSE) then
		run = false
	elseif ev[0].type == g.ALLEGRO_EVENT_MOUSE_BUTTON_DOWN and ev[0].mouse.button == 1 then	
		

		local mouse_v = cp.v(pixel2world(ev[0].mouse.x, ev[0].mouse.y))		
		
		
		space:BB_query(cp.BB(mouse_v.x, mouse_v.y, 1, 1),
			 	cp.ALL_LAYERS,
			 	cp.NO_GROUP,
			 	CALLBACK_QUERY,
			 	ffi.cast("void*", 0))
		

		if QUERY_SHAPE ~= 0 and W.entities[QUERY_SHAPE].role == "hitter" then
			local hitter_body = W.objects[QUERY_SHAPE].body
			local body_v = hitter_body:get_pos()
			local mouse_v_pixel = cp.v(world2pixel(body_v.x, body_v.y))
			-- only add constraint if click is inside bounds
			if W.general and W.general.bounds then  
				if is_in_bounds(mouse_v.x, mouse_v.y, W.general.bounds) then

					mouse_grab = true
					display:set_mouse_xy(mouse_v_pixel.x, mouse_v_pixel.y)
					

					mouse_body:set_pos(body_v)

					mouse_constraint = cp.pin_joint(mouse_body, hitter_body, cp.v(0,0), cp.v(0,0))
					mouse_constraint.maxForce = MAX_HITTER_FORCE
					space:add_constraint(mouse_constraint)
				end
			else
				mouse_grab = true
				display:set_mouse_xy(mouse_v_pixel.x, mouse_v_pixel.y)
				

				mouse_body:set_pos(body_v)

				mouse_constraint = cp.pin_joint(mouse_body, hitter_body, cp.v(0,0), cp.v(0,0))
				mouse_constraint.maxForce = MAX_HITTER_FORCE
				--mouse_constraint.errorBias = 0.15
				space:add_constraint(mouse_constraint)
			end

		end
		QUERY_SHAPE = 0

	elseif ev[0].type == g.ALLEGRO_EVENT_MOUSE_BUTTON_UP and ev[0].mouse.button == 1 then
		if mouse_grab and mouse_constraint then
			mouse_grab = false
			space:remove_constraint(mouse_constraint)
			mouse_constraint = nil
		end
	elseif ev[0].type == g.ALLEGRO_EVENT_MOUSE_BUTTON_DOWN and ev[0].mouse.button == 2 then
		right_click_pos.x = ev[0].mouse.x
		right_click_pos.y = ev[0].mouse.y
		is_right_clicking = true
	elseif ev[0].type == g.ALLEGRO_EVENT_MOUSE_BUTTON_UP and ev[0].mouse.button == 2 then
		is_right_clicking = false
	elseif ev[0].type == g.ALLEGRO_EVENT_MOUSE_AXES then
		-- mouse grab force
		local mouse_v = cp.v(pixel2world(ev[0].mouse.x, ev[0].mouse.y))
		-- if mouse_grab and mouse is out of bounds, remove constraint
		if mouse_grab and W.general and W.general.bounds and not is_in_bounds(mouse_v.x, mouse_v.y, W.general.bounds) then
			mouse_grab = false
			space:remove_constraint(mouse_constraint)
			mouse_constraint = nil
		elseif mouse_grab then
			mouse_body:set_pos(mouse_v)
		end
		-- ZOOM/UNZOOM with mouse wheel
		SCALE = DEFAULT_SCALE * (1 +  ev[0].mouse.z/MOUSE_WHEEL_SCALE)
		if SCALE > MAX_SCALE then 
			SCALE = MAX_SCALE
			g.set_mouse_z((MAX_SCALE/DEFAULT_SCALE-1)*MOUSE_WHEEL_SCALE)
		end
		if SCALE < MIN_SCALE then
			SCALE = MIN_SCALE 
			g.set_mouse_z((MIN_SCALE/DEFAULT_SCALE-1)*MOUSE_WHEEL_SCALE)
		end
	elseif ev[0].type == g.ALLEGRO_EVENT_KEY_DOWN then
		if ev[0].keyboard.keycode == g.ALLEGRO_KEY_SPACE then
			-- Reload current level
			LOAD_LEVEL = true
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_BACKSPACE then
			-- Load previous level
			CURRENT_LEVEL = CURRENT_LEVEL - 1
			if CURRENT_LEVEL < 1 then CURRENT_LEVEL = 1 end
			LOAD_LEVEL = true
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_P then
			-- Skip to next level (for debugging purposes)
			CURRENT_LEVEL = CURRENT_LEVEL+1
			LOAD_LEVEL = true
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_T then -- TEST only
			space:BB_query(cp.BB(0, 0, 400, 300),
			 	cp.ALL_LAYERS,
			 	cp.NO_GROUP,
			 	CALLBACK_QUERY,
			 	ffi.cast("void*", 0))
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_UP then
			keys.up = true
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_DOWN then
			keys.down = true
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_LEFT then
			keys.left = true
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_RIGHT then
			keys.right = true
		end
	elseif ev[0].type == g.ALLEGRO_EVENT_KEY_UP then
		if ev[0].keyboard.keycode == g.ALLEGRO_KEY_UP then
			keys.up = false
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_DOWN then
			keys.down = false
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_LEFT then
			keys.left = false
		elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_RIGHT then
			keys.right = false
		end
	end


	if (redraw and event_queue:is_empty()) then
		redraw = false

		-- draw everything
		g.clear()
		BACKGROUND:draw_tinted(0,0, g.rgb(128,64,0, 128))
		renderer.draw_all(W)

		local transform = g.transform()
		transform:identity()
		transform:use()

		if VICTORY_SCREEN then
			g.draw_text(FONT, g.rgb(128,128,128), 10, SCREEN_H-50, 0, GAME_MODE .. " " .. (CURRENT_LEVEL -1) .. "/" .. MAX_LEVEL)
		else
			g.draw_text(FONT, g.rgb(128,128,128), 10, SCREEN_H-50, 0, GAME_MODE .. " " .. CURRENT_LEVEL .. "/" .. MAX_LEVEL)
		end
		if W.info then
			if W.info.title then
				g.draw_text(FONT, g.rgb(255,255,255), 10, SCREEN_H-30, 0, W.info.title)
			end
			if W.info.description then
				g.draw_text(FONT, g.rgb(255,255,255), SCREEN_W-10, SCREEN_H-30, g.ALLEGRO_ALIGN_RIGHT, W.info.description)
			end
		end
		g.show()
	end

	if LOAD_LEVEL then
		if VICTORY_SCREEN then
			VICTORY_SCREEN = false
			local wait = true
			while wait do
				local ev = event_queue:wait_for_event()
				if (ev[0].type == g.ALLEGRO_EVENT_DISPLAY_CLOSE) then
					wait = false
					run=false
				end
				if ev[0].type == g.ALLEGRO_EVENT_KEY_DOWN then
					if ev[0].keyboard.keycode == g.ALLEGRO_KEY_SPACE then
						wait = false
						
						CURRENT_LEVEL = CURRENT_LEVEL - 1

					elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_ENTER then
						wait = false
					end
				end

				local transform = g.transform()
				transform:identity()
				transform:use()
				g.draw_text(BIG_FONT, g.rgb(255,255,255), SCREEN_W/2, SCREEN_H-100, g.ALLEGRO_ALIGN_CENTRE, ""..LEVEL_FRAMES)
				g.draw_text(FONT, g.rgb(255,0,0), SCREEN_W/2, SCREEN_H-20, g.ALLEGRO_ALIGN_CENTRE, "(Press ENTER to continue or SPACE to try again)")
				
				g.show()
			end
		end
		LEVEL_FRAMES = 0
		LOAD_LEVEL = false
		if CURRENT_LEVEL > MAX_LEVEL then CURRENT_LEVEL = MAX_LEVEL end
		print ("Loading level ".. CURRENT_LEVEL)
		W = nil
		space = nil
		mouse_grab = nil
		mouse_constraint = nil
		collectgarbage()
		collectgarbage() --called twice to eliminate all possible references
		W, space = loader.load_level(LEVEL_FOLDER .. DEFAULT_LEVEL_NAME .. CURRENT_LEVEL .. LEVEL_EXTENSION)
		g.set_mouse_z(0)
	end

end
end -- game_mode ~= exit

--profi:stop()
--profi:writeReport("profiling.txt")
W = nil
space = nil
mouse_constraint = nil
collectgarbage()
collectgarbage() --called twice to eliminate all possible references
