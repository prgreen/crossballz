-- http://wiki.allegro.cc/index.php?title=Allegro_5_Tutorial/Timers

local al = require "allegro"
local ffi = require "ffi"

local FPS = 60.0
local redraw = true

al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()

local timer = al.al_create_timer(1.0/FPS)
local display = al.al_create_display(640, 480)
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
		redraw = true
	else
		run = false
	end

	if redraw and al.al_is_event_queue_empty(event_queue) then
		redraw = false
		al.al_clear_to_color(al.al_map_rgb(0,0,0))
		al.al_flip_display()
	end
end

al.al_destroy_timer(timer)
al.al_destroy_display(display)
al.al_destroy_event_queue(event_queue)
