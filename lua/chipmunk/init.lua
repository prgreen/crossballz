local M = {}
local ffi = require 'ffi'


-- headers loaded from allua.init
-- additional definitions for static inline functions

ffi.cdef[[
    cpVect (*_cpvneg)(cpVect v);
    void (*_cpSpaceSetGravity)(cpSpace* s, cpVect v);
    void (*_cpSpaceSetDamping)(cpSpace* s, cpFloat v);
    void (*_cpShapeSetFriction)(cpShape* s, cpFloat v);
    void (*_cpShapeSetElasticity)(cpShape* s, cpFloat v);
    cpVect (*_cpBodyGetPos)(cpBody* b);
    cpFloat (*_cpBodyGetAngle)(cpBody* b);
    void* (*_cpShapeGetUserData)(cpShape* s);
    void (*_cpShapeSetUserData)(cpShape* s, void* data);
    cpBB (*_cpBBNew)(cpFloat l, cpFloat b, cpFloat r, cpFloat t);

]]
local cp
if _OS == "windows" then
    cp = ffi.load('libchipmunk.dll')
elseif _OS == "linux" then
    cp = ffi.load('/usr/local/lib/libchipmunk.so')
end

local bit = require "bit"
M.ALL_LAYERS = 65535
--print ("LAYERS ".. M.ALL_LAYERS)
M.NO_GROUP = 0

function M.space()
	return ffi.gc(cp.cpSpaceNew(), cp.cpSpaceFree)
end
M.space_type = {}
function M.space_type.set_gravity(space, gravity)
	cp._cpSpaceSetGravity(space, gravity)
end
function M.space_type.set_damping(space, damping)
	cp._cpSpaceSetDamping(space, damping)
end
-- doesn't return anything so as to simplify gc
function M.space_type.add_shape(space, shape)
	cp.cpSpaceAddShape(space, shape)
end
function M.space_type.add_static_shape(space, shape)
	cp.cpSpaceAddStaticShape(space, shape)
end
-- doesn't return anything so as to simplify gc
function M.space_type.add_body(space, body)
	cp.cpSpaceAddBody(space, body)
end
function M.space_type.add_constraint(space, constraint)
	cp.cpSpaceAddConstraint(space, constraint)
end
function M.space_type.add_collision_handler(space, a, b, begin, preSolve, postSolve, separate, data)
	cp.cpSpaceAddCollisionHandler(space, a, b, begin, preSolve, postSolve, separate, data)
end
function M.space_type.step(space, timeStep)
	cp.cpSpaceStep(space, timeStep)
end
jit.off(M.space_type.step) -- needed for collision callbacks to work properly

function M.space_type.remove_shape(space, shape)
	cp.cpSpaceRemoveShape(space, shape)
end
function M.space_type.remove_body(space, body)
	cp.cpSpaceRemoveBody(space, body)
end
function M.space_type.remove_constraint(space, constraint)
	cp.cpSpaceRemoveConstraint(space, constraint)
end
function M.space_type.BB_query(space, bb, layers, group, func, data)
	cp.cpSpaceBBQuery(space, bb, layers, group, func, data)
end
ffi.metatype("cpSpace", {__index = M.space_type})

function M.v(x, y)
	local ret = ffi.new("cpVect[1]")[0]
	ret.x = x
	ret.y = y
	return ret
end
function M.BB(x, y, w, h)
	--return cp._cpBBNew(x-w/2, y-h/2, x+w/2, y+h/2)
	local ret = ffi.new("cpBB[1]")[0]
	ret.l = x-w/2
	ret.b = y-h/2
	ret.r = x+w/2
	ret.t = y+h/2
	return ret
end

M.vzero = M.v(0, 0)

function M.body(mass, moment)
	return ffi.gc(cp.cpBodyNew(mass, moment), cp.cpBodyFree)
end
M.body_type = {}
function M.body_type.set_pos(body, pos)
	cp.cpBodySetPos(body, pos)
end
function M.body_type.get_pos(body)
	return cp._cpBodyGetPos(body)
end
function M.body_type.get_angle(body)
	return cp._cpBodyGetAngle(body)
end
function M.body_type.reset_forces(body)
	cp.cpBodyResetForces(body)
end
function M.body_type.apply_force(body, force, offset)
	cp.cpBodyApplyForce(body, force, offset)
end
ffi.metatype("cpBody", {__index = M.body_type})

function M.segment_shape(body, a, b, r)
	return ffi.gc(cp.cpSegmentShapeNew(body, a, b, r), cp.cpShapeFree)
end
function M.circle_shape(body, r, pos)
	return ffi.gc(cp.cpCircleShapeNew(body, r, pos), cp.cpShapeFree)
end
function M.box_shape(body, w, h)
	return ffi.gc(cp.cpBoxShapeNew(body, w, h), cp.cpShapeFree)
end
M.shape_type = {}
function M.shape_type.set_friction(shape, friction)
	cp._cpShapeSetFriction(shape, friction)
end
function M.shape_type.set_elasticity(shape, elasticity)
	cp._cpShapeSetElasticity(shape, elasticity)
end
function M.shape_type.set_data(shape, data)
	cp._cpShapeSetUserData(shape, data)
end
function M.shape_type.get_data(shape)
	return cp._cpShapeGetUserData(shape)
end
ffi.metatype("cpShape", {__index = M.shape_type})


function M.moment_for_circle(m, r1, r2, offset)
	return cp.cpMomentForCircle(m, r1, r2, offset)
end
function M.moment_for_box(m, w, h)
	return cp.cpMomentForBox(m, w, h)
end

function M.pin_joint(a, b, anchr1, anchr2)
	return ffi.gc(cp.cpPinJointNew(a, b, anchr1, anchr2), cpConstraintFree)
end
-- remove once API is complete
setmetatable(M, {__index = cp})

return M
