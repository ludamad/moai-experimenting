local enet = require "enet"

for k,v in pairs(enet) do
    print("enet", k,v)
end



local luv = require("luv")

local t1 = luv.thread.spawn(function(id)
   local f1 = luv.fiber.create(function()
      for i=1, 100 do
         print(id, "tick: ", i)
      end
   end)
   f1:join()
   return "answer"
end, "A")
local t2 = luv.thread.spawn(function(id)
   local f1 = luv.fiber.create(function()
      for i=1, 100 do
         print(id, "tick: ", i)
      end
   end)
   f1:join()
   return 42
end, "B")

local luv = require "luv"

print("threads:", t1, t2)

print("JOIN:", t1:join(), t2:join())
