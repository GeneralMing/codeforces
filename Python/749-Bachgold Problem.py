"""
    Solution to Codeforces problem 749A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
if(n >= 4):
	print(n//2)
	if(n%2 == 0):
		for i in range(n//2 - 1):
			print("2 ", end = '')
		print(2)
	else:
		for i in range(n//2 - 1):
			print("2 ", end = '')
		print(3)
elif(n == 2):
	print(1)
	print(2)
else:
	print(1)
	print(3)
