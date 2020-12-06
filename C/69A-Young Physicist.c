/*
    Solution to Codeforces problem 69A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n, num;
    scanf("%d", &n);
    int arr[3];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[0] += num;
        scanf("%d", &num);
        arr[1] += num;
        scanf("%d", &num);
        arr[2] += num;
    }
    if(!(arr[0] || arr[1] ||arr[2]))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}