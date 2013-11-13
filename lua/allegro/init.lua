local M = {}
local ffi = require 'ffi'

ffi.cdef [[
enum { ALLEGRO_VERSION = 5 };
enum { ALLEGRO_SUB_VERSION = 0 };
enum { ALLEGRO_WIP_VERSION = 8 };
enum { ALLEGRO_RELEASE_NUMBER = 1 };
enum { ALLEGRO_VERSION_INT = ((ALLEGRO_VERSION << 24) |
                              (ALLEGRO_SUB_VERSION << 16) |
                              (ALLEGRO_WIP_VERSION << 8) |
                              ALLEGRO_RELEASE_NUMBER) };

enum { ALLEGRO_DATE = 20120304 };
]]
local allegro
if _OS == "windows" then
    -- TODO won't work, need separate dlls
    allegro = ffi.load('allegro-5.0.8-monolith-mt.dll')
elseif _OS == "linux" then
    allegro = ffi.load('/usr/local/lib/liballegro.so')
    M.acodec = ffi.load('/usr/local/lib/liballegro_acodec.so', true)
    M.audio = ffi.load('/usr/local/lib/liballegro_audio.so', true)
    M.color = ffi.load('/usr/local/lib/liballegro_color.so', true)
    M.dialog = ffi.load('/usr/local/lib/liballegro_dialog.so', true)
    M.font = ffi.load('/usr/local/lib/liballegro_font.so', true)
    M.image = ffi.load('/usr/local/lib/liballegro_image.so', true)
    M.main = ffi.load('/usr/local/lib/liballegro_main.so', true)
    M.memfile = ffi.load('/usr/local/lib/liballegro_memfile.so', true)
    M.primitives = ffi.load('/usr/local/lib/liballegro_primitives.so', true)
    M.ttf = ffi.load('/usr/local/lib/liballegro_ttf.so', true)
end
    
setmetatable(M, {__index = allegro})

return M
