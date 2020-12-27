/*
    Solution to Codeforces problem 133A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int flag = 0;
    char str[129];
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++)
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            flag++;
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}