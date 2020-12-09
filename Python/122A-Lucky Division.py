"""
    Solution to Codeforces problem 122A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = int(input())
m = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
count = 0
for i in range(len(m)):
	if(n%m[i] == 0):
		count += 1
if(count > 0):
	print("YES")
else:
	print("NO")