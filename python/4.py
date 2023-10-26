# A palindromic number reads the same both ways. The largest palindrome made
# from the product of two 2-digit numbers is 9009 = 91 x 99.
# Find the largest palindrome made from the product of two 3-digit numbers.

currentMax = 0
for i in range(999, 100, -1):
    for j in range(i, 100, -1):
        numStr = str(i*j)
        if numStr == numStr[::-1] and i * j > currentMax:
            currentMax = i * j

print(currentMax)
# 906609
