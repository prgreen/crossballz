local g = require "game"

local FPS = 60.0
local SCREEN_W = 640
local SCREEN_H = 480
local BOUNCER_SIZE = 32

local bouncer_x = SCREEN_W / 2.0 - BOUNCER_SIZE / 2.0
local bouncer_y = SCREEN_H / 2.0 - BOUNCER_SIZE / 2.0

local bouncer_dx = -4.0
local bouncer_dy = -4.0

local redraw = true

g.init()

local timer = g.timer(1.0/FPS)
local display = g.display(SCREEN_W, SCREEN_H)
local bouncer = g.empty_image(BOUNCER_SIZE, BOUNCER_SIZE)

bouncer:set_target()
g.clear(255, 0, 255)

display:get_buffer():set_target()

local event_queue = g.event_queue()

event_queue:register(display:event_source())
event_queue:register(timer:event_source())
event_queue:register(g.mouse_event_source())

g.clear()
g.show()

timer:start()
local run = true
while run do 
	local ev = event_queue:wait_for_event()

	if (ev[0].type == g.ALLEGRO_EVENT_TIMER) then
		if bouncer_x < 0 or bouncer_x > SCREEN_W - BOUNCER_SIZE then
			bouncer_dx = -bouncer_dx
		end

		if bouncer_y < 0 or bouncer_y > SCREEN_H - BOUNCER_SIZE then
			bouncer_dy = -bouncer_dy
		end

		bouncer_x = bouncer_x + bouncer_dx
		bouncer_y = bouncer_y + bouncer_dy

		redraw = true
	elseif (ev[0].type == g.ALLEGRO_EVENT_DISPLAY_CLOSE) then
		run = false
	elseif (ev[0].type == g.ALLEGRO_EVENT_MOUSE_AXES or ev[0].type == g.ALLEGRO_EVENT_MOUSE_ENTER_DISPLAY) then
		bouncer_x = ev[0].mouse.x 
		bouncer_y = ev[0].mouse.y
	elseif (ev[0].type == g.ALLEGRO_EVENT_MOUSE_BUTTON_UP) then
		run = false
	end 

	if (redraw and event_queue:is_empty()) then
		redraw = false

		g.clear()
		bouncer:draw(bouncer_x, bouncer_y)
		g.show()
	end

end