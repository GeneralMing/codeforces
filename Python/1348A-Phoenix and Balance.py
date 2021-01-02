"""
    Solution to Codeforces problem 1348A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

t = int(input())
while(t):
	n = int(input())
	a = 2**n
	b = 0
	for i in range(1, n):
		if(i < n/2):
			a += 2**i
		else:
			b += 2**i
	print(a - b)
	t -= 1