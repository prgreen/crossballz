To regenerate ffi_all.h from the stub :


mingw32-gcc -std=c99 -I.\allegro5\include -I.\Chipmunk-6.1.3\include -IC:\MinGW\include -E stub.c > ffi_all.h


and regexp to eliminate lines starting with # :

\#.*\n



QUIRKS :

no cpvzero in chipmunk, use cpv(0,0)

no al_init in allegro, use al_install_system(ALLEGRO_VERSION_INT, nil)