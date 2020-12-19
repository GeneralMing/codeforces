"""
	Solution to Codeforces problem 266B
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

n, t = input().split(" ")
n = int(n)
t = int(t)
arr = input()
queue = [0]*len(arr)
output = ""
for i, _ in enumerate(arr):
	if(_ == 'B'):
		queue[i] = 0
	else:
		queue[i] = 1
for i in range(t):
	j = 0
	while(j < len(queue)-1):
		if(queue[j] == 0 and queue[j+1] == 1):
			queue[j] = 1
			queue[j+1] = 0
			j += 1
		j += 1
for i in queue:
	if(i == 0):
		output += 'B'
	else:
		output += 'G'
print(output)