/*
    Solution to Codeforces problem 59A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int upper = 0, lower = 0;
    char str[100];
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++)
        if(str[i] > 96)
            lower++;
        else
            upper++;
    if(lower >= upper)
        for(int i = 0; i < strlen(str); i++)
            str[i] = tolower(str[i]);
    else
        for(int i = 0; i < strlen(str); i++)
            str[i] = toupper(str[i]);
    printf("%s\n", str);
    return 0;
}