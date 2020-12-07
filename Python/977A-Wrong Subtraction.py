"""
    Solution to Codeforces problem 977A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n, k = input().split(" ")
n = int(n)
k = int(k)
while(k != 0):
	if(n%10):
		n -= 1
	else:
		n = int(n/10)
	k -= 1
print(n)