local M = {}

local g = require "game"

require "ballz.constants"

-- draws all entities from the world
function M.draw_all(w)

	local transform = g.transform()
	transform:identity()
	
	transform:scale(SCALE, -SCALE)
	transform:translate(SCREEN_W/2+TRANSLATE_X, SCREEN_H/2+TRANSLATE_Y)
	transform:use()

	-- draw everything in world coordinates

	-- draw bounds
	if w.general and w.general.bounds then

		local mouse_x = g.get_mouse_x()
		local mouse_y = g.get_mouse_y()
		mouse_x, mouse_y = pixel2world(mouse_x, mouse_y)

		for _,v in ipairs(w.general.bounds) do

			local top_left_x = v.x - v.w/2
			local top_left_y = v.y - v.h/2

			local top_right_x = v.x + v.w/2
			local top_right_y = v.y - v.h/2

			local bottom_left_x = v.x - v.w/2
			local bottom_left_y = v.y + v.h/2

			local bottom_right_x = v.x + v.w/2
			local bottom_right_y = v.y + v.h/2

			local color = g.rgb(0,255,255)
			
			if is_in_bound(mouse_x, mouse_y, v.x, v.y, v.w, v.h) then
				color = g.rgb(255, 0, 0)
			end
			g.draw_line(top_left_x, top_left_y, top_right_x, top_right_y, color, 0)
			g.draw_line(top_right_x, top_right_y, bottom_right_x, bottom_right_y, color, 0)
			g.draw_line(bottom_right_x, bottom_right_y, bottom_left_x, bottom_left_y, color, 0)
			g.draw_line(bottom_left_x, bottom_left_y, top_left_x, top_left_y, color, 0)
		end
	end

	-- draw objects
	for k,v in ipairs(w.objects) do
		local pos_vec = v.body:get_pos()
		local x = pos_vec.x
		local y = pos_vec.y

		local width = w.entities[k].w
		local height = w.entities[k].h
		local radius = w.entities[k].r

		-- TODO choose color depending on role
		local color = g.rgb(255,255,0)
		if w.entities[k].role == "hitter" then
			color = g.rgb(255, 0, 0)
		elseif w.entities[k].role == "ball" then
			color = g.rgb(0, 255, 0)
		elseif w.entities[k].role == "goal" then
			color = g.rgb(0, 0, 255)
		elseif w.entities[k].role == "dynamic" then
			color = g.rgb(139, 69, 19)
		end

		if w.entities[k].shape == "circle" then
			g.draw_filled_circle(x, y, radius, color)
			
			-- draw small circle to show rotation
			local ball_transform = g.transform()
			ball_transform:identity()

			ball_transform:build(x, y, 1.0, 1.0, w.objects[k].body:get_angle())
			ball_transform:scale(SCALE, -SCALE)
			ball_transform:translate(SCREEN_W/2+TRANSLATE_X, SCREEN_H/2+TRANSLATE_Y)
			ball_transform:use()
			g.draw_filled_circle(0, radius/2, radius/5, g.rgb(255,255,255))
			transform:use()
			
		elseif w.entities[k].shape == "box" then
			-- account for rotation for dynamic objects
			local box_transform = g.transform()
			if w.entities[k].role == "dynamic" then
			
				box_transform:identity()
				box_transform:build(x, y, 1.0, 1.0, w.objects[k].body:get_angle())
				box_transform:scale(SCALE, -SCALE)
				box_transform:translate(SCREEN_W/2+TRANSLATE_X, SCREEN_H/2+TRANSLATE_Y)

				box_transform:use()

				g.draw_filled_rectangle(-width/2, -height/2, width/2, height/2, color)
			
				transform:use()
			else
				g.draw_filled_rectangle(x-width/2, y-height/2, x+width/2, y+height/2, color)
			end
		elseif w.entities[k].shape == "segment" then
			g.draw_line(w.entities[k].x1, w.entities[k].y1, w.entities[k].x2, w.entities[k].y2, color, w.entities[k].thickness and 2*w.entities[k].thickness or 0)
		end
	end

	-- draw mouse cursor
	local mouse_x = g.get_mouse_x()
	local mouse_y = g.get_mouse_y()
	mouse_x, mouse_y = pixel2world(mouse_x, mouse_y)
	g.draw_filled_circle(mouse_x, mouse_y, 4, g.rgb(128,255,255))
end

return M