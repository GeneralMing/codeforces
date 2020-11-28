"""
	Solution to Codeforces problem 71A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

n = int(input())
i = 0
while(i < n):
	word = str(input())
	if(len(word) > 10):
		print(word[0] + str(len(word) - 2) + word[-1])
	else:
		print(word)
	i += 1