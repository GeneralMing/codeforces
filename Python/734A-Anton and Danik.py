"""
    Solution to Codeforces problem 734A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
st = str(input())
a = 0
d = 0
while(n != 0):
	n -= 1
	if(st[n] == "A"):
		a += 1
	else:
		d += 1
if(a > d):
	print("Anton")
elif(d > a):
	print("Danik")
else:
	print("Friendship")