"""
	Solution to Codeforces problem 1A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

n = input().split(" ")
a = int(n[2])
m = int(n[1])
n = int(n[0])
 
if(n%a==0):
	mul1 = n//a
else:
	mul1 = n//a + 1
if(m%a==0):
	mul2 = m//a
else:
	mul2 = m//a + 1
print(mul1*mul2)