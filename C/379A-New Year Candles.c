/*
    Solution to Codeforces problem 379A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int a, b, x, y, hours = 0;
	scanf("%d%d", &a, &b);
	while(a >= b)
	{
		y = a%b;
		x = a - y;
		hours += x;
		a = a/b;
		a = a + y;
	}
	hours += a;
	printf("%d\n", hours);
}