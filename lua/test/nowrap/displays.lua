-- http://wiki.allegro.cc/index.php?title=Allegro_5_Tutorial/Displays

local al = require "allegro"

al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()


local display = al.al_create_display(640, 480)

al.al_clear_to_color(al.al_map_rgb(128,128,128))

al.al_flip_display()

al.al_rest(5.0)

al.al_destroy_display(display)