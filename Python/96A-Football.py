"""
    Solution to Codeforces problem 96A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

n = str(input())
if(("0000000" in n) or ("1111111" in n)):
	print("YES")
else:
	print("NO")
