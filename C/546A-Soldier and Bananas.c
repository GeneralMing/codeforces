/*
    Solution to Codeforces problem 546A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    long int k, n, w, price = 0, extra;
    scanf("%ld", &k);
    scanf("%ld", &n);
    scanf("%ld", &w);
    for(int  i = 1; i <= w; i++)
        price += i*k;
    if(n > price)
    {
        printf("%d\n", 0);
        return 0;
    }
    extra = price - n;
    printf("%ld\n", extra);
    
    return 0;
}