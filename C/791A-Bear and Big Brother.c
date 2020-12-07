/*
    Solution to Codeforces problem 791A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int a, b, count = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    while(a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }
    printf("%d\n", count);
 
    return 0;
}