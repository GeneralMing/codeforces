"""
    Solution to Codeforces problem 58A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

s = input()
cm = "hello"
j = 0
count = 0
for i in range(len(s)):
	if(j < len(cm)):
		if(s[i] == cm[j]):
			j += 1
			count += 1
if(count == len(cm)):
	print("YES")
else:
	print("NO")