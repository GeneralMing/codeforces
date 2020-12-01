/*
	Solution to Codeforces problem 282A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int n, x = 0;
	int flag;
	char inp[4];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		flag = 0;
		scanf("%s", inp);
		for(int j = 0; j < strlen(inp); j++)
			if(inp[j] == '+')
				flag = 1;
		if(flag)
			x += 1;
		else
			x -= 1;
	}
	printf("%d\n", x);
}