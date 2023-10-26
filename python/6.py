# The sum of the squares of the first ten natural numbers is,
# 1^2 + 2^2 + ... + 10^2 = 385.
# The square of the sum of the first ten natural numbers is,
# (1 + 2 + ... + 10)^2 = 55^2 = 3025.
# Hence the difference between the sum of the squares of the first ten natural
# numbers and the square of the sum is 3025 - 385 = 2640.
# Find the difference between the sum of the squares of the first one hundred
# natural numbers and the square of the sum.

def sumOfSquares(max: int) -> int:
    sum = 0

    for i in range(1, max+1):
        sum += i**2

    return sum

def squareOfSum(max: int) -> int:
    sum = 0

    for i in range(1, max+1):
        sum += i
    
    return sum ** 2

print(abs(squareOfSum(100) - sumOfSquares(100)))
# 25164150
