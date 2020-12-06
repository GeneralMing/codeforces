"""
    Solution to Codeforces problem 546A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

k, n, w = input().split(" ")
k = int(k)
n = int(n)
w = int(w)
price = 0
for i in range(1, 1+w):
	price += i*k
if(n > price):
	print(0)
else:
	print(price - n)