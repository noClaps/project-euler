# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
# What is the 10,001st prime number?

primes = [2, 3, 5, 7, 11, 13]

n = 14

while len(primes) < 10_001:
    if not any(n % prime == 0 for prime in primes):
        primes.append(n)

    n += 1

print(primes[10_000]) 
# 104743
