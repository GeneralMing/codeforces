/*
    Solution to Codeforces problem 116A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n, b, a, curr = 0, cap = 0;
    scanf("%d", &n);
    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        curr -= a;
        curr += b;
        if(cap < curr)
            cap = curr;
    }
    
    printf("%d\n", cap);
    return 0;
}