-- PATH
package.path = package.path .. ";./lua/?/init.lua;./lua/?.lua"

-- PLATFORM
_DEBUG = true

_OS = jit.os == "Linux" and "linux" or "windows"
_ARCH = jit.arch == "x86" and "32" or "64"

_PLATFORM = _OS .. _ARCH

function debug(msg)
    if _DEBUG then
        print("LOG " .. msg)
    end
end

debug(_PLATFORM)

-- HEADERS
local ffi = require "ffi"

ffi.cdef (io.open('deps/ffi_' .. _PLATFORM ..'.h', 'r'):read('*a'))
-- TODO check file existence and fallback on 32 bits when appropriate

-- SHARED LIBRARIES
if _PLATFORM == "linux" then


elseif _PLATFORM == "windows" then 


end

