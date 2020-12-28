"""
    Solution to Codeforces problem 677A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""
n, h = input().split(" ")
n = int(n)
h = int(h)
count = 0
arr = input().split(" ")
for i in arr:
	if(int(i) > h):
		count += 1
width = n + count
print(width)