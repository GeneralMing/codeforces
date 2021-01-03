"""
	Solution to Codeforces problem 110B
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

n = int(input())
while(True):
	if(n == 0):
		break
	print("a", end = "")
	n -= 1
	if(n == 0):
		break
	print("b", end = "")
	n -= 1
	if(n == 0):
		break
	print("c", end = "")
	n -= 1
	if(n == 0):
		break
	print("d", end = "")
	n -= 1
print("")