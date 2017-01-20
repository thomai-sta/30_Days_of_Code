#!/bin/python3


arr = []
s = 0
max_sum = -100
for arr_i in range(6):
    arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
    arr.append(arr_t)

for i in range(4):
    for j in range(4):
        s += arr[i][j]
        s += arr[i][j + 1]
        s += arr[i][j + 2]
        s += arr[i + 1][j + 1]
        s += arr[i + 2][j]
        s += arr[i + 2][j + 1]
        s += arr[i + 2][j + 2]
        if s > max_sum:
            max_sum = s
        s = 0

print(max_sum)