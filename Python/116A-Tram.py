"""
    Solution to Codeforces problem 116A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
cap = 0
curr = 0
for i in range(n):
	a, b = input().split(" ")
	a = int(a)
	b = int(b)
	curr -= a
	curr += b
	if(cap < curr):
		cap = curr
print(cap)