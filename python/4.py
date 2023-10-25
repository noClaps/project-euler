def palindromeCheck(num: int) -> bool:
    numStr = str(num)

    return numStr == numStr[::-1]

currentMax = 0
for i in range(999, 100, -1):
    for j in range(i, 100, -1):
        if palindromeCheck(i*j) == True and i * j > currentMax:
            currentMax = i * j

print(currentMax)