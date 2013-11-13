local M = {}

local json = require "utils.json"
local cp = require "chipmunk"
local ffi = require "ffi"

require "ballz.constants"


function COLLISION_BEGIN(arb, space, data)
	--print ("collision begin")
	return 1
end
function COLLISION_PRESOLVE(arb, space, data)
	--print ("collision presolve")
	return 1
end
function COLLISION_POSTSOLVE(arb, space, data)
	--print ("collision postsolve")
end
function COLLISION_SEPARATE(arb, space, data)
	--print "collision separate"
	VICTORY_SCREEN = true
	LOAD_LEVEL = true
	CURRENT_LEVEL = CURRENT_LEVEL + 1
end
CALLBACK_BEGIN = ffi.cast("int (*)(cpArbiter *arb, struct cpSpace *space, void *data)",COLLISION_BEGIN)
CALLBACK_PRESOLVE= ffi.cast("int (*)(cpArbiter *arb, struct cpSpace *space, void *data)",COLLISION_PRESOLVE)

CALLBACK_POSTSOLVE = ffi.cast("void (*)(cpArbiter *arb, struct cpSpace *space, void *data)",COLLISION_POSTSOLVE)
CALLBACK_SEPARATE = ffi.cast("void (*)(cpArbiter *arb, struct cpSpace *space, void *data)",COLLISION_SEPARATE)

function M.load_level(path)
	-- TODO check for file existence
	-- TODO test level properties for consistency
	-- TODO cache json and only reset space on level reset
	-- TODO user data to get entity info from physical object
	-- TODO check entities for gaps in indices
	local w = json.decode(io.open(path, 'r'):read('*a'))

	if w.general and w.general.size then DEFAULT_SCALE = SCREEN_W/w.general.size end
	SCALE = DEFAULT_SCALE

	TRANSLATE_X = 0
	TRANSLATE_Y = 0

	w.objects = {}
	local space = cp.space()
	if w.general and w.general.gravity then
		space:set_gravity(cp.v(0, -w.general.gravity))
	else
		space:set_gravity(cp.v(0, -DEFAULT_GRAVITY))
	end

	if w.general and w.general.damping then
		space:set_damping(w.general.damping)
	else
		space:set_damping(DEFAULT_DAMPING)
	end


	for k,v in ipairs(w.entities) do
		if v.role == "static" or v.role == "goal" then
			if v.shape == "box" then
				
				w.objects[k] = {}
				w.objects[k].body = cp.body(INFINITY, INFINITY)
				-- rogue body, we don't add it to space
				w.objects[k].body:set_pos(cp.v(v.x, v.y))
				w.objects[k].shape = cp.box_shape(w.objects[k].body, v.w, v.h)
				w.objects[k].shape:set_friction(v.friction and v.friction or DEFAULT_FRICTION)
				w.objects[k].shape:set_elasticity(v.elasticity and v.elasticity or DEFAULT_ELASTICITY)
				w.objects[k].data = ffi.new("int[1]")
				w.objects[k].data[0] = k
				w.objects[k].shape:set_data(ffi.cast("void*", w.objects[k].data))
				--print ("data " .. ffi.cast("int*",w.objects[k].shape:get_data())[0])
				space:add_shape(w.objects[k].shape)

	
			elseif v.shape == "segment" then
				w.objects[k] = {}
				w.objects[k].body = cp.body(INFINITY, INFINITY)
				-- rogue body, we don't add it to space
				--w.objects[k].body:set_pos(cp.v(v.x, v.y))
				w.objects[k].shape = cp.segment_shape(w.objects[k].body, cp.v(v.x1, v.y1), cp.v(v.x2, v.y2), v.thickness and v.thickness or 0 )
				w.objects[k].shape:set_friction(v.friction and v.friction or DEFAULT_FRICTION)
				w.objects[k].shape:set_elasticity(v.elasticity and v.elasticity or DEFAULT_ELASTICITY)
				w.objects[k].data = ffi.new("int[1]")
				w.objects[k].data[0] = k
				w.objects[k].shape:set_data(ffi.cast("void*", w.objects[k].data))

				space:add_shape(w.objects[k].shape)
			end
			if v.role == "goal" then
				w.objects[k].shape.collision_type = 2
			end
		elseif v.role == "ball" then
			if v.shape == "circle" then
				w.objects[k] = {}
				w.objects[k].body = cp.body(DEFAULT_BALL_MASS, cp.moment_for_circle(v.m and v.m or DEFAULT_BALL_MASS, 0, v.r and v.r or DEFAULT_BALL_RADIUS, cp.v(0,0)))
				
				space:add_body(w.objects[k].body)

				w.objects[k].body:set_pos(cp.v(v.x, v.y))
				w.objects[k].shape = cp.circle_shape(w.objects[k].body, v.r and v.r or DEFAULT_BALL_RADIUS, cp.v(0,0))
				w.objects[k].shape:set_friction(v.friction and v.friction or DEFAULT_FRICTION)
				w.objects[k].shape:set_elasticity(v.elasticity and v.elasticity or DEFAULT_ELASTICITY)
				w.objects[k].shape.collision_type = 1
				w.objects[k].data = ffi.new("int[1]")
				w.objects[k].data[0] = k
				w.objects[k].shape:set_data(ffi.cast("void*", w.objects[k].data))

				space:add_shape(w.objects[k].shape)
			end
		elseif v.role == "hitter" then
				w.objects[k] = {}
				w.objects[k].body = cp.body(v.m and v.m or DEFAULT_HITTER_MASS, INFINITY)
				
				space:add_body(w.objects[k].body)

				w.objects[k].body:set_pos(cp.v(v.x, v.y))
				w.objects[k].shape = cp.box_shape(w.objects[k].body, v.w, v.h)
				w.objects[k].shape:set_friction(v.friction and v.friction or DEFAULT_FRICTION)
				w.objects[k].shape:set_elasticity(v.elasticity and v.elasticity or DEFAULT_ELASTICITY)
				w.objects[k].data = ffi.new("int[1]")
				w.objects[k].data[0] = k
				w.objects[k].shape:set_data(ffi.cast("void*", w.objects[k].data))

				space:add_shape(w.objects[k].shape)
		elseif v.role == "dynamic" then
			if v.shape == "box" then
				w.objects[k] = {}
				w.objects[k].body = cp.body(v.m and v.m or DEFAULT_HITTER_MASS, v.moment and v.moment or cp.moment_for_box(v.mass and v.mass or DEFAULT_HITTER_MASS, v.w, v.h))
				
				space:add_body(w.objects[k].body)

				w.objects[k].body:set_pos(cp.v(v.x, v.y))
				w.objects[k].shape = cp.box_shape(w.objects[k].body, v.w, v.h)
				w.objects[k].shape:set_friction(v.friction and v.friction or DEFAULT_FRICTION)
				w.objects[k].shape:set_elasticity(v.elasticity and v.elasticity or DEFAULT_ELASTICITY)
				w.objects[k].data = ffi.new("int[1]")
				w.objects[k].data[0] = k
				w.objects[k].shape:set_data(ffi.cast("void*", w.objects[k].data))
				
				space:add_shape(w.objects[k].shape)

			end
		end

	end
	space:add_collision_handler(1,2,CALLBACK_BEGIN,CALLBACK_PRESOLVE, CALLBACK_POSTSOLVE, CALLBACK_SEPARATE, ffi.cast("void*",0))
	return w, space
end

return M