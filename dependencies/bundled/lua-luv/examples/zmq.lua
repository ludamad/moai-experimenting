local luv = require('luv')

local zmq = luv.zmq.create(1)
local prod = luv.thread.spawn(function()
   local pub = zmq:socket(luv.zmq.PAIR)
   pub:bind('inproc://#1')

   print("enter prod:")
   for i=1, 1000000 do
      pub:send("tick: "..i)
   end
   print("waiting for OK")
   print(pub:recv())
   print("GOT IT")
   pub:close()
end)

local cons = luv.thread.spawn(function()
   local sub = zmq:socket(luv.zmq.PAIR)
   sub:connect('inproc://#1')

   print("enter cons")
   for i=1, 1000000 do
      sub:recv()
   end

   sub:send('OK')
   sub:close()
end)

cons:join()


