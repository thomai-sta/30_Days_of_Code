#!/bin/python3


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

s = ""

for i in range(1, n + 1):
    s += str(arr[-i]) + " "

print(s)
