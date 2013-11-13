local M = {}

local g = require "game"
require "ballz.constants"

-- run menu given an initialized display and event queue
function M.run(event_queue)
	MENU_FONT = g.font(CONTENT_FOLDER .. FONT_FOLDER .. DEFAULT_FONT_FILE, 24, 0)
	local menu_options = M.get_menu_options()
	local num_options = 0
	for k,v in pairs(menu_options) do
		num_options = num_options + 1
	end

	local cursor = 0

	local run = true
	local redraw = true
	g.clear(0,0,0)
	M.draw_menu(menu_options)
	g.draw_filled_circle(SCREEN_W/3, cursor*SCREEN_H/num_options + SCREEN_H/(2*num_options)+10, 10, g.rgb(255,255,255))
	g.show()
	while run do 
		local ev = event_queue:wait_for_event()

		if (ev[0].type == g.ALLEGRO_EVENT_DISPLAY_CLOSE) then
			return "exit"
		elseif ev[0].type == g.ALLEGRO_EVENT_KEY_DOWN then
			if ev[0].keyboard.keycode == g.ALLEGRO_KEY_SPACE or ev[0].keyboard.keycode == g.ALLEGRO_KEY_ENTER then
				run = false
			elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_UP then
				cursor = cursor - 1
				if cursor == -1 then cursor = num_options - 1 end
				redraw = true
			elseif ev[0].keyboard.keycode == g.ALLEGRO_KEY_DOWN then
				cursor = cursor + 1
				cursor = cursor % num_options
				redraw = true
			end
		end

		if redraw then
			redraw = false
			g.clear(0,0,0)
			M.draw_menu(menu_options)
			g.draw_filled_circle(SCREEN_W/3, cursor*SCREEN_H/num_options + SCREEN_H/(2*num_options)+10, 10, g.rgb(255,255,255))
			g.show()
		end
	end

	-- TODO this is an ugly hack
	local ret = {}
	local counter = 0
	for k,v in pairs(menu_options) do
		if cursor == counter then ret[k]=v end 
		counter = counter + 1
	end
	return ret
end

function M.get_menu_options()
	-- check in content folder then levels folder
	-- for all folder names
	local f = g.fs_entry(CONTENT_FOLDER .. LEVEL_FOLDER)
	local menu_options = {}

	print ("Checking content... Please wait...")
	for k,v in pairs(f:list()) do
		if v:is_directory() then
			print (k)
			menu_options[k]=v
		end
	end
	print ("Done checking content.")
	return menu_options
end
function M.draw_menu(menu_options)
	local num_options = 0
	for k,v in pairs(menu_options) do
		num_options = num_options + 1
	end

	-- display all options, dividing space regularly
	local i = 0
	for k,v in pairs(menu_options) do
		g.draw_text(MENU_FONT, g.rgb(255,255,255), SCREEN_W/2, i*SCREEN_H/num_options + SCREEN_H/(2*num_options), g.ALLEGRO_ALIGN_CENTRE, M.menu_format(k))
		i = i + 1
	end
end

-- strip (back)slashes and keep only the leaf
-- in uppercase
function M.menu_format(menu_option)
	local forward_slashes_menu_option = ""
	for i = 1, #menu_option do
    	local c = menu_option:sub(i,i)
    	if c == "\\" then
    		if i ~= #menu_option then 
	    		forward_slashes_menu_option = forward_slashes_menu_option .. "/"
	    	end
    	else
    		forward_slashes_menu_option = forward_slashes_menu_option .. c
    	end
    end
	local exp = M.explode('/', forward_slashes_menu_option)


	return string.upper(exp[#exp])
end

function M.explode(div,str) -- credit: http://richard.warburton.it
  if (div=='') then return false end
  local pos,arr = 0,{}
  -- for each divider found
  for st,sp in function() return string.find(str,div,pos,true) end do
    table.insert(arr,string.sub(str,pos,st-1)) -- Attach chars left of current divider
    pos = sp + 1 -- Jump past current divider
  end
  table.insert(arr,string.sub(str,pos)) -- Attach chars right of last divider
  return arr
end

return M