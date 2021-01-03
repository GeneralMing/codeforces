/*
	Solution to Codeforces problem 110B
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	while(1)
	{
		if(n == 0)
			break;
		printf("a");
		n--;
		if(n == 0)
			break;
		printf("b");
		n--;
		if(n == 0)
			break;
		printf("c");
		n--;
		if(n == 0)
			break;
		printf("d");
		n--;
	}
	printf("\n");
}