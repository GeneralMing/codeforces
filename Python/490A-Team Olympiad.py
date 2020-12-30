"""
    Solution to Codeforces problem 490A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
l = input().split(" ")
d = {1: [], 2: [], 3: []}
for i in range(len(l)):
	l[i] = int(l[i])
	if(l[i] == 1):
		d[1].append(i+1)
	if(l[i] == 2):
		d[2].append(i+1)
	if(l[i] == 3):
		d[3].append(i+1)
m = min(min(len(d[1]), len(d[2])), len(d[3]))
if(m == 0):
	print(m)
else:
	print(m)
	for i in range(m):
		print(d[1][i], d[2][i], d[3][i])