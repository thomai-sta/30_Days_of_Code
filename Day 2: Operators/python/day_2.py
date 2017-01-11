#!/usr/local/bin/python
# -*- coding: utf-8 -*-

meal_cost = float(input())
tip_percent = int(input())
tax_percent = int(input())

total_cost = meal_cost
total_cost += (meal_cost * tip_percent / 100)
total_cost += (meal_cost * tax_percent / 100)

print("The total meal cost is %d dollars." % round(total_cost))
