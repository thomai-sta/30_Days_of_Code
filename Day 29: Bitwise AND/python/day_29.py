#!/bin/python3

T = int(input().strip())
for t in range(T):
    result = 0
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    for a in range(1, n):
        for b in range(a + 1, n + 1):
            res = a & b
            if (res >= k):
                break
            if (res > result):
                result = res
        if (res >= k):
            break

    print(result)
