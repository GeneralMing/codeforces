/*
    Solution to Codeforces problem 41A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int count = 0;
    char str1[101], str2[101];
    scanf("%s%s", str1, str2);
    for(int i = 0; i < strlen(str1); i++)
        if(str1[i] == str2[strlen(str1) - i - 1])
            count++;
    if(count == strlen(str1))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}