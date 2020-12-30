"""
    Solution to Codeforces problem 703A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
m = 0
c = 0
for i in range(n):
	die1, die2 = input().split(" ")
	die1 = int(die1)
	die2 = int(die2)
	if(die1 > die2):
		m += 1
	elif(die2 > die1):
		c += 1
if(m > c):
	print("Mishka")
elif(c > m):
	print("Chris")
else:
	print("Friendship is magic!^^")