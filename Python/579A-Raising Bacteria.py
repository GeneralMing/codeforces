"""
    Solution to Codeforces problem 579A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
counter = 0

while(n > 1):
	if(n%2 == 0):
		n = n/2
	else:
		n = n-1
		counter += 1
print(counter+1)