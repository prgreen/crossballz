-- http://wiki.allegro.cc/index.php?title=Allegro_5_Tutorial/Events

local al = require "allegro"
local ffi = require "ffi"

al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()

local display = al.al_create_display(640,480)

local event_queue = al.al_create_event_queue()

al.al_register_event_source(event_queue, al.al_get_display_event_source(display))

al.al_clear_to_color((al.al_map_rgb(0,0,0)))

al.al_flip_display()

local run = true

while run do 
	local ev = ffi.new("ALLEGRO_EVENT[1]")
	local timeout = ffi.new("ALLEGRO_TIMEOUT[1]")
	al.al_init_timeout(timeout, 0.06)

	get_event = al.al_wait_for_event_until(event_queue, ev, timeout)

	if (get_event ~= 0 and ev[0].type == al.ALLEGRO_EVENT_DISPLAY_CLOSE) then
		run = false
	end

	al.al_clear_to_color(al.al_map_rgb(0,0,0))
	al.al_flip_display()

end

al.al_destroy_display(display)
al.al_destroy_event_queue(event_queue)
