local g = require "game"

local p = g.fs_entry("content/levels")
print (p:exists())

local l = p:list()

for k,v in pairs(l) do
	print (k)
	print (v:exists())
end