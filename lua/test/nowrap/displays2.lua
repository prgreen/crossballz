-- http://wiki.allegro.cc/index.php?title=Creating_a_fullscreen_display_with_current_desktop_resolution

local al = require "allegro"
local ffi = require "ffi"

al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()

al.al_init_image_addon()
al.al_init_primitives_addon()

local disp_data = ffi.new("ALLEGRO_DISPLAY_MODE[1]")
al.al_get_display_mode(al.al_get_num_display_modes() - 1, disp_data)

al.al_set_new_display_flags(al.ALLEGRO_FULLSCREEN)
local display = al.al_create_display(disp_data[0].width, disp_data[0].height)

al.al_rest(3.0)
al.al_destroy_display(display) 