"""
    Solution to Codeforces problem 617A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
rem = n%5
if(rem):
	step = n//5 + 1
else:
	step = n//5
print(step)