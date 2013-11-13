local g = require "game"
local cp = require "chipmunk"
local ffi = require "ffi"



local space = cp.cpSpaceNew()


function vec(x, y)
	local ret = ffi.new("cpVect[1]")[0]
	ret.x = x
	ret.y = y
	return ret
end

local cpvzero = ffi.new("cpVect[1]")[0]
cpvzero.x = 0
cpvzero.y = 0
local gravity = ffi.new("cpVect[1]")[0]
gravity.x = 0
gravity.y = -100

cp._cpSpaceSetGravity(space, gravity)

local ground = cp.cpSegmentShapeNew(space.staticBody,
	vec(-20,5),
	vec(20,-5),
	0)
cp._cpShapeSetFriction(ground, 1)
cp._cpShapeSetElasticity(ground, 1.5)
cp.cpSpaceAddShape(space, ground)

local radius = 5
local mass = 1

local moment = cp.cpMomentForCircle(mass, 0, radius, cpvzero)

local ballBody = cp.cpSpaceAddBody(space, cp.cpBodyNew(mass, moment))

cp.cpBodySetPos(ballBody, vec(0,100))

local ballShape = cp.cpSpaceAddShape(space, cp.cpCircleShapeNew(ballBody, radius, cpvzero))
cp._cpShapeSetFriction(ballShape, 0.7)
cp._cpShapeSetElasticity(ballShape, 0.7)


local timeStep = 1.0/60.0

g.init()


local timer = g.timer(timeStep)
local display = g.display(800, 600)

local event_queue = g.event_queue()

event_queue:register(display:event_source())
event_queue:register(timer:event_source())

g.clear()
g.show()

timer:start()
local run = true
local redraw = true
while run do 
	local ev = event_queue:wait_for_event()
	local pos

	if (ev[0].type == g.ALLEGRO_EVENT_TIMER) then
		redraw = true
		-- physics
		cp.cpSpaceStep(space, timeStep)
		pos = cp._cpBodyGetPos(ballBody)

	elseif (ev[0].type == g.ALLEGRO_EVENT_DISPLAY_CLOSE) then
		run = false
	end

	if (redraw and event_queue:is_empty()) then
		redraw = false
		-- draw stuff
		local transform = g.transform()
		transform:identity()
		
		transform:scale(2, 2)
		transform:translate(400, 300)
		transform:use()
		g.clear()
		g.draw_filled_circle(pos.x, -pos.y, 5, g.rgb(255,255,255))
		g.draw_line(-20, -5, 20, 5, g.rgb(255,255,255), 1)

		-- radius line for the ball
		local transform = g.transform()
		transform:identity()

		transform:build(pos.x, -pos.y, 1.0, 1.0, -cp._cpBodyGetAngle(ballBody))
		transform:scale(2, 2)
		transform:translate(400, 300)
		transform:use()
		g.draw_filled_circle(0, 2.5, 1, g.rgb(255,0,0))


		g.show()
	end

end

cp.cpShapeFree(ballShape)
cp.cpBodyFree(ballBody)
cp.cpShapeFree(ground)
cp.cpSpaceFree(space)