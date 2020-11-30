"""
	Solution to Codeforces problem 158A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

inp = input().split()
n = inp[0] = int(inp[0])
k = inp[1] = int(inp[1])
inp = input().split()
i = count = 0
while(i < n):
	inp[i] = int(inp[i])
	i += 1
srt = sorted(inp)
srt.reverse();
print(srt)
for i in srt:
	if(i >= srt[k-1] and i != 0):
		count += 1
print(count)