"""
	Solution to Codeforces problem 69A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

n = int(input())
arr = [0, 0, 0]
for i in range(n):
	num = input().split(" ")
	arr[0] += int(num[0])
	arr[1] += int(num[1])
	arr[2] += int(num[2])

if(arr[0] or arr[1] or arr[2]):
	print("NO")
else:
	print("YES")