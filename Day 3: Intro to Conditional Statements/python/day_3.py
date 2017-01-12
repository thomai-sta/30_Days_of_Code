#!/usr/local/bin/python
# -*- coding: utf-8 -*-

num = int(input().strip())

if (num % 2):
    print("Weird")
elif (num >= 2 and num <= 5):
    print("Not Weird")
elif (num >= 6 and num <= 20):
    print("Weird")
else:
    print("Not Weird")
