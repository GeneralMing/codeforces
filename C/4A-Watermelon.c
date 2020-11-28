/*
	Solution to Codeforces problem 4A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>

int main()
{
	int w;
	scanf("%d", &w);
	if(w%2 != 0 || w == 2)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}