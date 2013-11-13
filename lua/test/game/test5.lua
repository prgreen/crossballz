-- rewrite test3 with no ffi 
-- and using object-oriented wrappers

local g = require "game"
local cp = require "chipmunk"

local SCREEN_W = 800
local SCREEN_H = 600

local SCALE = 2

function pixel2world(x, y)
	return cp.v((x-SCREEN_W/2)/SCALE, (SCREEN_H/2-y)/SCALE)
end
function world2pixel(x, y)
end

local space = cp.space()
local cpvzero = cp.v(0, 0)
local gravity = cp.v(0, -100)

space:set_gravity(gravity)
space:set_damping(0.3)
local ground = cp.segment_shape(space.staticBody,
	cp.v(-20,5),
	cp.v(20,-5),
	0)
ground:set_friction(1)
ground:set_elasticity(0.7)
space:add_shape(ground)

local radius = 5
local mass = 1

local moment = cp.moment_for_circle(mass, 0, radius, cpvzero)

local ballBody = cp.body(mass, moment) -- CHECK GC
space:add_body(ballBody)

ballBody:set_pos(cp.v(0, 100))

local ballShape = cp.circle_shape(ballBody, radius, cpvzero)
space:add_shape(ballShape)
ballShape:set_friction(0.7)
ballShape:set_elasticity(0.7)


local timeStep = 1.0/60.0

g.init()


local timer = g.timer(timeStep)
local display = g.display(SCREEN_W, SCREEN_H)

local event_queue = g.event_queue()

event_queue:register(display:event_source())
event_queue:register(timer:event_source())
event_queue:register(g.mouse_event_source())

g.clear()
g.show()

timer:start()
local mouseBody = cp.body(1e99, 1e99)
local run = true
local redraw = true
while run do 
	local ev = event_queue:wait_for_event()
	local pos = ballBody:get_pos()

	if (ev[0].type == g.ALLEGRO_EVENT_TIMER) then
		redraw = true
		-- physics
		space:step(timeStep)
		pos = ballBody:get_pos()

	elseif (ev[0].type == g.ALLEGRO_EVENT_DISPLAY_CLOSE) then
		run = false
	elseif ev[0].type == g.ALLEGRO_EVENT_MOUSE_BUTTON_DOWN then
		local x = ev[0].mouse.x
		local y = ev[0].mouse.y
		local p = pixel2world(x,y)
		mouseBody:set_pos(p)
		local constraint = cp.pin_joint(mouseBody, ballBody, cpvzero, cpvzero)
		space:add_constraint(constraint)
	elseif ev[0].type == g.ALLEGRO_EVENT_MOUSE_AXES then
		local x = ev[0].mouse.x
		local y = ev[0].mouse.y
		local p = pixel2world(x,y)
		mouseBody:set_pos(p)
	elseif ev[0].type == g.ALLEGRO_EVENT_KEY_DOWN then
		if ev[0].keycode == g.ALLEGRO_KEY_SPACE then
			
		end
	end

	if (redraw and event_queue:is_empty()) then
		redraw = false
		-- draw stuff
		local transform = g.transform()
		transform:identity()
		
		transform:scale(SCALE, SCALE)
		transform:translate(SCREEN_W/2, SCREEN_H/2)
		transform:use()
		g.clear()
		g.draw_filled_circle(pos.x, -pos.y, 5, g.rgb(255,255,255))
		g.draw_line(-20, -5, 20, 5, g.rgb(255,255,255), 1)

		-- radius line for the ball
		local transform = g.transform()
		transform:identity()

		transform:build(pos.x, -pos.y, 1.0, 1.0, -ballBody:get_angle())
		transform:scale(SCALE, SCALE)
		transform:translate(SCREEN_W/2, SCREEN_H/2)
		transform:use()
		g.draw_filled_circle(0, 2.5, 1, g.rgb(255,0,0))


		g.show()
	end

end