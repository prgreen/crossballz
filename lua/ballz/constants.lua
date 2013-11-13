-- global constants
SCREEN_W = 800
SCREEN_H = 600
SCALE = 2
DEFAULT_SCALE = 2
MAX_SCALE = 5
MIN_SCALE = 0.2
TRANSLATE_X = 0
TRANSLATE_Y = 0
TRANSLATE_SPEED = 10
TRANSLATE_MOUSE_FACTOR = 1
TIMESTEP = 1.0/60.0
W = {} -- physical world

CONTENT_FOLDER = "content/"
LEVEL_FOLDER = "levels/"
FONT_FOLDER = "fonts/"
IMAGE_FOLDER = "images/"
DEFAULT_BACKGROUND = "cloud_bg.png"
DEFAULT_LEVEL_NAME = "/level"
DEFAULT_FONT_FILE = "Inconsolata.otf"
LEVEL_EXTENSION = ".json"

--MAX_LEVEL = 4


DEFAULT_GRAVITY = 100
DEFAULT_DAMPING = 0.7
DEFAULT_FRICTION = 0.5
DEFAULT_ELASTICITY = 0.7

DEFAULT_BALL_MASS = 1
DEFAULT_BALL_RADIUS = 10

DEFAULT_HITTER_MASS = 3
MAX_HITTER_FORCE = 10000

INFINITY = 1e99

MOUSE_WHEEL_SCALE = 20
MOUSE_FORCE_FACTOR = 10

VICTORY_SCREEN = false
LOAD_LEVEL = false
CURRENT_LEVEL = 1
LEVEL_FRAMES = 0

function pixel2world(x, y)
	return (x-(SCREEN_W/2+TRANSLATE_X))/SCALE, (SCREEN_H/2+TRANSLATE_Y-y)/SCALE
end
function world2pixel(x, y)
	return x*SCALE+SCREEN_W/2+TRANSLATE_X, -(y*SCALE-(SCREEN_H/2+TRANSLATE_Y))
end

function is_in_bound(x, y, b_x, b_y, b_w, b_h)
	return x >= b_x - b_w/2
		and x <= b_x + b_w/2
		and y <= b_y + b_h/2
		and y >= b_y - b_h/2
end

function is_in_bounds(x, y, bounds_tab)
	local ret = false
	for _,v in ipairs(bounds_tab) do
		if is_in_bound(x, y, v.x, v.y, v.w, v.h) then
			ret = true
		end
	end
	return ret
end


local ffi = require "ffi"
QUERY_SHAPE = 0 -- remember last queried shape
function QUERY(shape, data)
	local shape_data = ffi.cast("int*", shape:get_data())
	--print ("shape found ".. tostring(shape_data[0]))
	QUERY_SHAPE = shape_data[0]
end


CALLBACK_QUERY = ffi.cast("void (*) (cpShape* s, void* d)", QUERY)
