/*
    Solution to Codeforces problem 579A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, counter = 0;
	scanf("%d", &n);
	while(n > 1)
	{
		if(n%2 == 0)
			n = n/2;
		else
		{
			n = n-1;
			counter++;
		}
	}
	printf("%d\n", counter+1);
	return 0;
}