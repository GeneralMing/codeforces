/*
    Solution to Codeforces problem 266B
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>
 
int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    
    char queue[n];
    scanf("%s", queue);
    
    for(int i = 0; i < t; i++)
        for(int j = 0; j < n-1; j++)
        {
            if((queue[j] == 'B') && (queue[j+1] == 'G'))
            {
                queue[j] = 'G';
                queue[++j] = 'B';
            }
        }
    printf("%s\n", queue);
    return 0;
}