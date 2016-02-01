def Alg x, y
   a = [x, y].max 
   b = [x, y].min 
  
   unless a % b == 0 
     gcd a, a % b
   else
     return b
   end
end
puts " #{Alg (180, 15 )}"
