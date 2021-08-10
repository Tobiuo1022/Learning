a = 'Ruby'
a.prepend(<<~TEXT)
  Java
  PHP
TEXT

puts(a.upcase)
