-- http://wiki.allegro.cc/index.php?title=Allegro_5_Tutorial/Bitmaps

local al = require "allegro"
local ffi = require "ffi"


local FPS = 60.0
local SCREEN_W = 640
local SCREEN_H = 480
local BOUNCER_SIZE = 32

local bouncer_x = SCREEN_W / 2.0 - BOUNCER_SIZE / 2.0
local bouncer_y = SCREEN_H / 2.0 - BOUNCER_SIZE / 2.0

local bouncer_dx = -4.0
local bouncer_dy = -4.0

local redraw = true

al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()

local timer = al.al_create_timer(1.0/FPS)

local display = al.al_create_display(SCREEN_W, SCREEN_H)

local bouncer = al.al_create_bitmap(BOUNCER_SIZE, BOUNCER_SIZE)

al.al_set_target_bitmap(bouncer)
al.al_clear_to_color(al.al_map_rgb(255,0,255))

al.al_set_target_bitmap(al.al_get_backbuffer(display))

local event_queue = al.al_create_event_queue()

al.al_register_event_source(event_queue, al.al_get_display_event_source(display))
al.al_register_event_source(event_queue, al.al_get_timer_event_source(timer))

al.al_clear_to_color(al.al_map_rgb(0,0,0))

al.al_flip_display()

al.al_start_timer(timer)

local run = true
while run do 
	local ev = ffi.new("ALLEGRO_EVENT[1]")
	al.al_wait_for_event(event_queue, ev)

	if (ev[0].type == al.ALLEGRO_EVENT_TIMER) then
		if bouncer_x < 0 or bouncer_x > SCREEN_W - BOUNCER_SIZE then
			bouncer_dx = -bouncer_dx
		end

		if bouncer_y < 0 or bouncer_y > SCREEN_H - BOUNCER_SIZE then
			bouncer_dy = -bouncer_dy
		end

		bouncer_x = bouncer_x + bouncer_dx
		bouncer_y = bouncer_y + bouncer_dy

		redraw = true
	elseif (ev[0].type == al.ALLEGRO_EVENT_DISPLAY_CLOSE) then
		run = false
	end 

	if (redraw and al.al_is_event_queue_empty(event_queue)) then
		redraw = false

		al.al_clear_to_color(al.al_map_rgb(0,0,0))
		al.al_draw_bitmap(bouncer, bouncer_x, bouncer_y, 0)
		al.al_flip_display()
	end
end

al.al_destroy_bitmap(bouncer)
al.al_destroy_timer(timer)
al.al_destroy_display(display)
al.al_destroy_event_queue(event_queue)