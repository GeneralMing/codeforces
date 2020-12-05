"""
	Solution to Codeforces problem 236A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

count = 0
inp = str(input())
x = set()
for i in inp:
	x.add(i)
if(len(x)%2):
	print("IGNORE HIM!")
else:
	print("CHAT WITH HER!")