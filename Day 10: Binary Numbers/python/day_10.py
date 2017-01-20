#!/bin/python3

n = int(input().strip())

ones = 0
consecutive = 0

while (n > 0):
    if n % 2 == 1:
        ones += 1
        if ones > consecutive:
            consecutive = ones
    else:
        ones = 0
    n //= 2

print(consecutive)
