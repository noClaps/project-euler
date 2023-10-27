# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143?
from primes import primes
num = 600851475143
for prime in primes:
    if num == prime:
        break
    if num % prime == 0:
        num /= prime

print(num)
# 6857
