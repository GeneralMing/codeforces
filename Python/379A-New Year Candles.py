"""
    Solution to Codeforces problem 379A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

a, b = input().split(" ")
a = int(a)
b = int(b)
hours = 0
while(a >= b):
	y = a%b
	x = a - y
	hours += x
	a = a//b
	a = a + y
hours += a
print(hours)