def largestPrimeFactor(num: int) -> int:
    divisor = 2
    while divisor <= num:
        if num % divisor == 0:
            num /= divisor
        else: divisor += 1

    return divisor

print(largestPrimeFactor(600851475143))