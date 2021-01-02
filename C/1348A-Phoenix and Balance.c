/*
    Solution to Codeforces problem 1348A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--)
	{
		int a = 0, b = 0;
		scanf("%d", &n);
		a = (int)pow((double)2, (double)n);
		for(int i = 1; i < n; i++)
		{
			if(i < n/2)
				a += (int)pow((double)2, (double)i);
			else
				b += (int)pow((double)2, (double)i);
		}
		printf("%d\n", abs(a - b));
	}
}