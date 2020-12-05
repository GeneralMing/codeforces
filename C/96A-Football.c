/*
    Solution to Codeforces problem 96A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int isSubstring(char s1[], char s2[])
{
    int M = strlen(s1);
    int N = strlen(s2);
 
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return 1;
    }
 
    return 0;
}

int main()
{
	char n[101];
	scanf("%s", n);
	if(isSubstring("1111111", n) || isSubstring("0000000", n))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}