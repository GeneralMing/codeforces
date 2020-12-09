/*
    Solution to Codeforces problem 122A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n, count = 0, m[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    scanf("%d", &n);
    for(int i = 0; i < 14; i++)
        if(n % m[i] == 0)
            count++;
    if(count)
        printf("%s\n", "YES");
    else
        printf("%s\n", "NO");
    return 0;
}