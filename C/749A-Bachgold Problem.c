/*
    Solution to Codeforces problem 749A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	if(n >= 4)
	{
		if(n%2 == 0)
		{
			printf("%d\n", n/2);
			for(int i = 0; i < n/2; i++)
				printf("%d ", 2);
			printf("\n");
		}
		else
		{
			printf("%d\n", n/2);
			for(int i = 0; i < n/2-1; i++)
				printf("%d ", 2);
			printf("3\n");
		}
	}
	else if(n == 2)
		printf("1\n2\n");
	else
		printf("1\n3\n");	
	return 0;
}
