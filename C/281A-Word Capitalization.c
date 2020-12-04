/*
	Solution to Codeforces problem 281A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char a[1000];
	scanf("%s",a);
	if(a[0] >= 97)
		a[0] = a[0]-32;
	printf("%s\n",a);
	return 0;
}