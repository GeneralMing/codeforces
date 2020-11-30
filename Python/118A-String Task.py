"""
	Solution to Codeforces problem 118A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
"""

string = str(input())
string = string.lower()
output = ""
for i in string:
	if(i in ['a', 'e', 'i', 'o', 'u', 'y']):
		pass
	else:
		output = output + '.' + i
print(output)