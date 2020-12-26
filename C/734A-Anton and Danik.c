/*
    Solution to Codeforces problem 734A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include <stdio.h>
 
int main()
{
    int n, a = 0, d = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    
    while(n--)
    {
        if(str[n] == 'A')
            a++;
        else
            d++;
    }
    
    if(a > d)
        printf("Anton\n");
    else if(d > a)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}