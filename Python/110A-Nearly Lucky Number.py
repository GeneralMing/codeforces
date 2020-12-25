"""
    Solution to Codeforces problem 110A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

number = input()
output = 0
for i in number:
	if(i == '4' or i == '7'):
		output += 1
if(output == 4 or output == 7):
	print("YES")
else:
	print("NO")