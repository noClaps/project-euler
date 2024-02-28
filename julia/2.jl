a = 0
b = 1
sum = 0

while a < 4e6
	global sum += a % 2 === 0 ? a : 0
	global a, b = b, a+b
end

println(sum)
# 4613732
