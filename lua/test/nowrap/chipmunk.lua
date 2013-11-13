local al = require "allegro"
local cp = require "chipmunk"
local ffi = require "ffi"

ffi.cdef[[
    cpVect (*_cpvneg)(cpVect v);
    void (*_cpSpaceSetGravity)(cpSpace* s, cpVect v);
    void (*_cpShapeSetFriction)(cpShape* s, cpFloat v);
    cpVect (*_cpBodyGetPos)(cpBody* b);
]]

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
cp.cpSpaceAddShape(space, ground)

local radius = 5
local mass = 1

local moment = cp.cpMomentForCircle(mass, 0, radius, cpvzero)

local ballBody = cp.cpSpaceAddBody(space, cp.cpBodyNew(mass, moment))

cp.cpBodySetPos(ballBody, vec(0,15))

local ballShape = cp.cpSpaceAddShape(space, cp.cpCircleShapeNew(ballBody, radius, cpvzero))
cp._cpShapeSetFriction(ballShape, 0.7)


local timeStep = 1.0/60.0

for time = 0,2,timeStep do
	local pos = cp._cpBodyGetPos(ballBody)
	print ("Time is " .. time .. " ball is at " .. pos.x .. " " .. pos.y)

	cp.cpSpaceStep(space, timeStep)
end

cp.cpShapeFree(ballShape)
cp.cpBodyFree(ballBody)
cp.cpShapeFree(ground)
cp.cpSpaceFree(space)