local M = {}

local al = require "allegro"
local ffi = require "ffi"

function M.init ()
if _OS == "windows" then
        al.al_install_system(al.ALLEGRO_VERSION_INT, nil)
	al.al_init_image_addon()
	al.al_init_font_addon()
	al.al_init_ttf_addon()
	al.al_init_primitives_addon()
	al.al_install_audio()
	al.al_init_acodec_addon()
	al.al_install_keyboard()
	al.al_install_mouse()
elseif _OS == "linux" then
        al.al_install_system(al.ALLEGRO_VERSION_INT, nil)
        al.image.al_init_image_addon()
        al.font.al_init_font_addon()
        al.ttf.al_init_ttf_addon()
        al.primitives.al_init_primitives_addon()
        al.audio.al_install_audio()
        al.acodec.al_init_acodec_addon()
        al.al_install_keyboard()
        al.al_install_mouse()

end
end


-- Be sure to call this BEFORE loading bitmaps
-- so bitmaps are loaded in video memory
function M.display(w, h)
	return ffi.gc(al.al_create_display(w, h), al.al_destroy_display)
end

M.display_type = {}
function M.display_type.get_buffer(display)
	return al.al_get_backbuffer(display)
end
function M.display_type.event_source(display)
	return al.al_get_display_event_source(display)
end
function M.display_type.title(display, title)
	al.al_set_window_title(display, title)
end
function M.display_type.icon(display, icon)
	al.al_set_display_icon(display, icon)
end
function M.display_type.set_mouse_xy(display, x, y)
	al.al_set_mouse_xy(display, x, y)
end
function M.display_type.hide_mouse_cursor(display)
	al.al_hide_mouse_cursor(display)
end
ffi.metatype("ALLEGRO_DISPLAY", {__index = M.display_type})


function M.sleep(t)
	al.al_rest(t)
end

function M.image(path)
	return ffi.gc(al.al_load_bitmap(path), al.al_destroy_bitmap)
end

function M.empty_image(w, h)
	return ffi.gc(al.al_create_bitmap(w, h), al.al_destroy_bitmap)
end

M.image_type = {}
function M.image_type.draw(image, x, y) 
	if type(x) == "nil" then
		al.al_draw_bitmap(image, 0, 0, 0)
	else
		al.al_draw_bitmap(image, x, y, 0)
	end
end
function M.image_type.set_target(image)
	al.al_set_target_bitmap(image)
end
function M.image_type.draw_tinted(image, x, y, color)
	al.al_draw_tinted_bitmap(image, color, x, y, 0)
end
ffi.metatype("ALLEGRO_BITMAP", {__index = M.image_type})

function M.show()
	al.al_flip_display()
end

function M.clear(r, g, b)
	if type(r) == "nil" then
		al.al_clear_to_color(al.al_map_rgb(0,0,0))
	else
		al.al_clear_to_color(al.al_map_rgb(r, g, b))
	end
end


function M.timer(t)
	return ffi.gc(al.al_create_timer(t), al.al_destroy_timer)
end
M.timer_type = {}
function M.timer_type.start(timer)
	al.al_start_timer(timer)
end
function M.timer_type.event_source(timer)
	return al.al_get_timer_event_source(timer)
end
ffi.metatype("ALLEGRO_TIMER", {__index = M.timer_type})

function M.event_queue()
	return ffi.gc(al.al_create_event_queue(), al.al_destroy_event_queue)
end
M.event_queue_type = {}
function M.event_queue_type.register(event_queue, source)
	al.al_register_event_source(event_queue, source)
end
function M.event_queue_type.wait_for_event(event_queue)
	local ev = ffi.new("ALLEGRO_EVENT[1]")
	al.al_wait_for_event(event_queue, ev)
	return ev
end
function M.event_queue_type.is_empty(event_queue)
	return al.al_is_event_queue_empty(event_queue)
end
ffi.metatype("ALLEGRO_EVENT_QUEUE", {__index = M.event_queue_type})


function M.mouse_event_source()
	return al.al_get_mouse_event_source()
end

function M.keyboard_event_source()
	return al.al_get_keyboard_event_source()
end


function M.transform()
	return ffi.new("ALLEGRO_TRANSFORM")
end
M.transform_type = {}
function M.transform_type.identity(transform)
	al.al_identity_transform(transform)
end
function M.transform_type.scale(transform, x, y)
	al.al_scale_transform(transform, x, y)
end
function M.transform_type.translate(transform, x, y)
	al.al_translate_transform(transform, x, y)
end
function M.transform_type.rotate(transform, theta)
	al.al_rotate_transform(transform, theta)
end
function M.transform_type.use(transform)
	al.al_use_transform(transform)
end
function M.transform_type.build(transform, x, y, sx, sy, theta)
	al.al_build_transform(transform, x, y, sx, sy, theta)
end
function M.transform_type.copy(transform)
	local ret = ffi.new("ALLEGRO_TRANSFORM")
	al.al_copy_transform(ret, transform)
	return ret
end
ffi.metatype("ALLEGRO_TRANSFORM", {__index = M.transform_type})



function M.rgb(r, g, b)
	return al.al_map_rgb(r, g, b)
end

function M.draw_line(x1, y1, x2, y2, color, thickness)
    if _OS == "windows" then
	al.al_draw_line(x1, y1, x2, y2, color, thickness)
    else
        al.primitives.al_draw_line(x1, y1, x2, y2, color, thickness)
    end
end
function M.draw_filled_circle(x, y, r, color)
    if _OS == "windows" then	
        al.al_draw_filled_circle(x, y, r, color)
    else
        al.primitives.al_draw_filled_circle(x, y, r, color)
    end
end
function M.draw_filled_rectangle(x1, y1, x2, y2, color)
    if _OS == "windows" then	
        al.al_draw_filled_rectangle(x1, y1, x2, y2, color)
    else
        al.primitives.al_draw_filled_rectangle(x1, y1, x2, y2, color)
    end
end

function M.font(path, size, flags)
    if _OS == "windows" then
	return ffi.gc(al.al_load_ttf_font(path, size, flags), al.al_destroy_font)
    else
        return ffi.gc(al.ttf.al_load_ttf_font(path, size, flags), al.ttf.al_destroy_font)
    end
end

function M.draw_text(font, color, x, y, flags, text)
    if _OS == "windows"	then
        al.al_draw_text(font, color, x, y, flags, text)
    else
        al.ttf.al_draw_text(font, color, x, y, flags, text)
    end
end

function M.set_mouse_z(z)
	al.al_set_mouse_z(z)
end
function M.get_mouse_x()
	local st = ffi.new("ALLEGRO_MOUSE_STATE")
	al.al_get_mouse_state(st)
	return st.x
end
function M.get_mouse_y()
	local st = ffi.new("ALLEGRO_MOUSE_STATE")
	al.al_get_mouse_state(st)
	return st.y
end


function M.fs_entry(path)
	return ffi.gc(al.al_create_fs_entry(path), al.al_destroy_fs_entry)
end
M.fs_entry_type = {}
function M.fs_entry_type.exists(fs_entry)
	return al.al_fs_entry_exists(fs_entry)
end
function M.fs_entry_type.path(fs_entry)
	return ffi.string(al.al_get_fs_entry_name(fs_entry))
end
-- list files in directory
function M.fs_entry_type.list(fs_entry)
	local file_list = {}
	if al.al_open_directory(fs_entry) then
		local file_name = al.al_read_directory(fs_entry)
		while file_name ~= nil do
			file_list[file_name:path()] = file_name
			file_name = al.al_read_directory(fs_entry)
		end
		al.al_close_directory(fs_entry)
		return file_list
	else return false end
end
--[[
typedef enum ALLEGRO_FILE_MODE
{
   ALLEGRO_FILEMODE_READ    = 1,
   ALLEGRO_FILEMODE_WRITE   = 1 << 1,
   ALLEGRO_FILEMODE_EXECUTE = 1 << 2,
   ALLEGRO_FILEMODE_HIDDEN  = 1 << 3,
   ALLEGRO_FILEMODE_ISFILE  = 1 << 4,
   ALLEGRO_FILEMODE_ISDIR   = 1 << 5,
} ALLEGRO_FILE_MODE;
]]--
function M.fs_entry_type.is_directory(fs_entry)
	return al.al_get_fs_entry_mode(fs_entry) >= 32
end
ffi.metatype("ALLEGRO_FS_ENTRY", {__index = M.fs_entry_type})


-- not necessary once API is complete
setmetatable(M, {__index = al})

return M
