"""
	Solution to Codeforces problem 231A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

n = int(input())
var = 0
for i in range(0, n):
	c = input().split()
	if(c.count('1') >= 2):
		var += 1
print(var)