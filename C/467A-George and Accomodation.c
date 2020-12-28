/*
    Solution to Codeforces problem 467A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>
 
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int p[n], q[n];
 
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        scanf("%d", &q[i]);
        if((q[i]-p[i]) > 1)
            count++;
    }
    printf("%d\n", count);
 
    return 0;
}