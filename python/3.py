# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143?

divisor = 2
num = 600851475143
while divisor <= num:
    if num % divisor == 0:
        num /= divisor
    else: divisor += 1

print(divisor)
# 6857
