/*
    Solution to Codeforces problem 266A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>
 
int main()
{
    int n, count = 0;
    
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    
    for(int i= 0; i < n-1 ; i++)
        if(str[i] == str[i+1])
            count++;
    
    printf("%d\n", count);
    return 0;
}