"""
	Solution to Codeforces problem 282A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

n = int(input())
x = 0
for i in range(0,n):
	inp = str(input())
	if('+' in inp):
		x = x+1
	else:
		x = x-1
print(x)