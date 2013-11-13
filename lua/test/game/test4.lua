local json = require "utils.json"

local t = json.decode(io.open('lua/test/resources/test.json', 'r'):read('*a'))

print (t.info.title)
print (t.info.description)
print (t.info.author)
print (type(t.info.custom))

for k,v in ipairs(t.entities) do
	print (k)
	print (v.r)
end