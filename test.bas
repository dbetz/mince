10 def fact(n)
20   if n < 2 then
30     return n
40   else
50     return fact(n-1) * n
60   end if
70 end def
80 a = 2
90 b = 10
100 for x=a to b
110 print x, fact(x)
120 next x
