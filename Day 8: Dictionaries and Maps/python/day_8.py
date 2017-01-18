#!/bin/python3

import fileinput

n = int(input().strip())

phone_book = {}

for i in range(n):
    name, number = input().strip().split(' ')
    phone_book[name] = number

for line in fileinput.input():
    name = line.strip()
    if name in phone_book:
        print(name + "=" + phone_book[name])
    else:
        print("Not found")
