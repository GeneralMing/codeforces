"""
    Solution to Codeforces problem 41A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

str1 = input()
str2 = input()
str1 = str1[-1: : -1]

if(str1 == str2):
	print("YES")
else:
	print("NO")