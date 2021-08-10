def greeting(a, b, c=0, d:hoge())
  "a:#{a}, b:#{b}, c:#{c}, d:#{d}"
end

def hoge(num=3)
  num
end

p greeting(1,1,d:1)
