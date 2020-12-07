/*
    Solution to Codeforces problem 977A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    while(k--)
    {
        if(n%10)
            n--;
        else
            n = n/10;
    }
    printf("%d\n", n);
    return 0;
}