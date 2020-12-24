"""
    Solution to Codeforces problem 160A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

total = 0
check_sum = 0
count = 0
coins = []
n = int(input())
l1 = input().split(" ")
for i in l1:
	coins.append(int(i))
	total += int(i)
coins = sorted(coins, reverse = True)
half = total/2
for i in coins:
	count += 1
	check_sum += i
	if(check_sum > half):
		break
print(count)