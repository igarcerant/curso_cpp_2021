#!/usr/bin/env tclsh

puts "hello, world!"

puts -nonewline "dime tu código: "
flush stdout
gets stdin code

puts "tu codigo fue:"
puts $code

puts "ahora ejecuto tu codigo:"
puts [eval $code]



