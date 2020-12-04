"""
    Solution to Codeforces problem 266A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

count = 0
n = int(input())
inp = str(input())
for i in range(len(inp)-1):
	if(inp[i] == inp[i+1]):
		count += 1
print(count)