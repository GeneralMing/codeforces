"""
    Solution to Codeforces problem 791A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

count = 0
a, b = input().split(" ")
a = int(a)
b = int(b)
while(a <= b):
	a *= 3
	b *= 2
	count += 1
print(count)