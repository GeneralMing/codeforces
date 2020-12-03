"""
    Solution to Codeforces problem 339A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

a = input()
l = []
emp = ""
for i in a:
    if(i.isdigit()):
        l.append(int(i))
l.sort()
for i in l:
    emp += str(i) + '+'
print(emp[0:-1:1])