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