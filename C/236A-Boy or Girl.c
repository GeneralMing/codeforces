/*
    Solution to Codeforces problem 236A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int arr[26], count = 0;
    char str[100];
    
    for(int i = 0; i < 26; i++)
        arr[i] = 0;
    
    scanf("%s", str);
    
    for(int i = 0; i < strlen(str); i++)
        arr[str[i]-'0' - 49]++;
    
    for(int i = 0; i < 26; i++)
        if(arr[i] > 0)
            count++;
    if(count%2)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!");
    return 0;
}