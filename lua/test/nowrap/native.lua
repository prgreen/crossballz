local al = require "allegro"

al.al_install_system(al.ALLEGRO_VERSION_INT, nil) -- this is al_init()

al.al_show_native_message_box(al.al_get_current_display(),
	"Window Title", 
	"Content Title",
	"Error message here",
	nil,
	al.ALLEGRO_MESSAGEBOX_ERROR)
