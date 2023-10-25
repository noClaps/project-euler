def sumOf3Or5(num: int) -> int:
    sum = 0
    for i in range(num):
        if i % 3 == 0 or i % 5 == 0:
            sum += i

    return sum

print(sumOf3Or5(1000))