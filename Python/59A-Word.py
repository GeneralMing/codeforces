"""
    Solution to Codeforces problem 59A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

inp = str(input())
upper = lower = 0
res = ""
for i in inp:
	if(i.isupper()):
		upper += 1
	else:
		lower += 1

if(lower >= upper):
	for i in inp:
		res += i.lower()
else:
	for i in inp:
		res += i.upper()
print(res)