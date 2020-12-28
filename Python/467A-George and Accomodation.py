"""
    Solution to Codeforces problem 467A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
count = 0
p = [0]*n
q = [0]*n
for i in range(n):
	p[i], q[i] = input().split(" ")
	p[i] = int(p[i])
	q[i] = int(q[i])
	if(q[i] - p[i] > 1):
		count += 1
print(count)