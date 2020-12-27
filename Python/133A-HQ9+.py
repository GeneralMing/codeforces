"""
    Solution to Codeforces problem 133A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

flag = 0
st = str(input())
for i in st:
	if(i == 'Q' or i == 'H' or i == '9'):
		flag += 1
if(flag):
	print("YES")
else:
	print("NO")