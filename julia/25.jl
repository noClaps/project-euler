function fib(n)
	a = big(0)
	b = big(1)

	for _ = 0:n
		a, b = b, a+b
	end

	return a
end

num = 0
n = 1

while length("$num") < 1000
	global num = fib(big(n))
	global n += 1
end

println(n)
# 4782
