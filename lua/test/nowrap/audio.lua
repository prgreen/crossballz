local al = require "allegro"

al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()
al.al_install_audio()
al.al_init_acodec_addon()
al.al_reserve_samples(1)

local sample = al.al_load_sample("lua/test/resources/ball.wav")
local display = al.al_create_display(640,480)

al.al_play_sample(sample, 1.0, 0.0, 1.0, al.ALLEGRO_PLAYMODE_LOOP, nil)

al.al_rest(10.0)

al.al_destroy_display(display)
al.al_destroy_sample(sample)

