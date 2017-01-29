#!/bin/python3


n = int(input().strip())
a = [int(a_temp) for a_temp in input().strip().split(' ')]

total_swaps = 0
swaps_occured = False

for i in range(n):
    for j in range(n - 1, i, -1):
        if (a[j] < a[j - 1]):
            temp = a[j]
            a[j] = a[j - 1]
            a[j - 1] = temp
            swaps_occured = True
            total_swaps += 1
    if (not swaps_occured):
        break
    swaps_occured = False

print("Array is sorted in %d swaps." % total_swaps)
print("First Element: %d" % a[0])
print("Last Element: %d" % a[-1])
