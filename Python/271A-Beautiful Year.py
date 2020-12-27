"""
    Solution to Codeforces problem 271A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

def distinct(n):
	if(n[0] != n[1]):
		if(n[0] != n[2]):
			if(n[0] != n[3]):
				if(n[1] != n[2]):
					if(n[1] != n[3]):
						if(n[2] != n[3]):
							return False
	return True

year = int(input())
not_distinct = True
year_iter = year+1
digits = [0]*4
while(not_distinct):
	num = year_iter
	year_iter += 1
	digits[3] = num%10
	num = num//10
	digits[2] = num%10
	num = num//10
	digits[1] = num%10
	num = num//10
	digits[0] = num%10
	num = num//10
	not_distinct = distinct(digits)
for i in digits:
	print(i, end = "")
print("")


