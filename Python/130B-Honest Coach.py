"""
    Solution to Codeforces problem 130B
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

t = int(input())
while(t != 0):
	min = 1001
	n = int(input())
	athletes = input().split(" ")
	for i in range(n):
		athletes[i] = int(athletes[i])
	athletes.sort()
	for i in range(n-1):
		if(min > abs(athletes[i] - athletes[i+1])):
			min = abs(athletes[i] - athletes[i+1])
	print(min)
	t -= 1