local al = require "allegro"

al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()
al.al_init_font_addon()
al.al_init_ttf_addon()

local display = al.al_create_display(640,480)

local font = al.al_load_ttf_font("lua/test/resources/pirulen.ttf",32,0)

al.al_clear_to_color(al.al_map_rgb(50,10,70))
al.al_draw_text(font, al.al_map_rgb(255,255,255), 640/2, 480/4, al.ALLEGRO_ALIGN_CENTRE, "SPACE WARS")

al.al_flip_display()

al.al_rest(5.0)

al.al_destroy_display(display)
