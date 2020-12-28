/*
    Solution to Codeforces problem 677A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
    int n, h, count = 0, width;
    scanf("%d %d", &n, &h);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > h)
            count++;
    }
    width = n+count;
    printf("%d\n", width);
    return 0;
}