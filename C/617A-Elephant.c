/*
    Solution to Codeforces problem 617A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n, step, rem;
    scanf("%d", &n);
    rem = n%5;
    if(rem)
        step = n/5 + 1;
    else
        step = n/5;
    printf("%d\n", step);
    return 0;
}