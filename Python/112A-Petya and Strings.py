"""
	Solution to Codeforces problem 112A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

a = input().lower()
b = input().lower()
if(a==b):
	print(0)
else:
	if(a<b):
		print(-1)
	else:
		print(1)