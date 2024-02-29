fact = factorial(big(100))
ans = sum([parse(Int, i) for i in string(fact)])

println(ans)
# 648
