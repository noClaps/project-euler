# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
# What is the 10,001st prime number?

from math import sqrt

def primeChecker(primes: list, valueToCheck: int) -> bool:
    i = 0
    while i < len(primes) and primes[i] <= sqrt(valueToCheck):
        if valueToCheck % primes[i] == 0:
            return False
        i += 1
    
    return True

primes = [2, 3, 5, 7, 11, 13]

n = 17

while len(primes) < 10_001:
    if primeChecker(primes, n):
        primes.append(n)

    n += 2

print(primes[10_000]) 
# 104743
