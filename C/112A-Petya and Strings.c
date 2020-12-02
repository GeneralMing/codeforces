/*
	Solution to Codeforces problem 112A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char a[101], b[101];
	scanf("%s%s", a, b);
	for(int i = 0; i < strlen(a); i++)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}
	if(strcmp(a, b) == 0)
		printf("%d\n", 0);
	else if(strcmp(a, b) < 0)
		printf("%d\n", -1);
	else
		printf("%d\n", 1);
}