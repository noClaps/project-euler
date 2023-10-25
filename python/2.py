def fibonacciEvenSum(max: int) -> int:
    sum = 0
    a = 1
    b = 2

    while a < max:
        if a % 2 == 0:
            sum += a

        a, b = b, a + b

    return sum

print(fibonacciEvenSum(4e6))