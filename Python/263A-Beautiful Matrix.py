"""
    Solution to Codeforces problem 263A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
"""

a = []
count = 0
lock = True
for i in range(5):
    a.append(input().split(" "))

for i in range(5):
    for j in range(5):
        a[i][j] = int(a[i][j])
        if(a[i][j] == 1):
            x = i
            y = j

while(lock):
    lock = False;
    if(x > 2):
        count += 1;
        x -= 1;
        lock = True;
    if(x < 2):
        count += 1;
        x += 1;
        lock = True;
    if(y > 2):
        count += 1;
        y -= 1;
        lock = True;
    if(y < 2):
        count += 1;
        y += 1;
        lock = True;
print(count)
    