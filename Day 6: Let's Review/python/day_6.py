#!/bin/python3

T = int(input().strip())
for i in range(T):
    st = input().strip()
    odd = ""
    even = ""
    for s in range(len(st)):
        if (s % 2):
            # Odd
            odd += st[s]
        else:
            # even
            even += st[s]
    print(even + " " + odd)
