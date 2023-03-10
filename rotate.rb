#!/usr/bin/ruby

f = File.read('cats.txt')

e = f.split("").map do |c|
	if ('a'..'z').member?(c)
		d = c.ord + 2
		if d > 122
			d -= 26
		end
		c = d.chr
	end

	if ('A'..'Z').member?(c)
		d = c.ord + 2
		if d > 90
			d -= 26
		end
		c = d.chr
	end

	c
end

puts e.join("")
