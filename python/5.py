from math import log, floor

def smallestCommonMultiple(max: int) -> int:
    primes = [2, 3, 5, 7, 11, 13, 17, 19]
    product = 1

    for i in primes:
        product *= i ** floor(log(max) / log(i))

    return product

print(smallestCommonMultiple(20))