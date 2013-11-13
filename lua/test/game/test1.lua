local g = require "game"

g.init()

g.display(640, 480)
local image = g.image("lua/test/resources/image.png")
image:draw()
g.show()
g.sleep(3)