-- http://wiki.allegro.cc/index.php?title=Basic_tutorial_on_loading_and_showing_images

local al = require "allegro"
local ffi = require "ffi"


al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()
al.al_init_image_addon()


local display = al.al_create_display(800, 600)

local image = al.al_load_bitmap("lua/test/resources/image.png") -- always load images AFTER display creation

al.al_draw_bitmap(image, 0, 0, 0)

al.al_flip_display()
al.al_rest(5.0)

al.al_destroy_display(display)
al.al_destroy_bitmap(image)