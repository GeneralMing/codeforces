/*
    Solution to Codeforces problem 703A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int n, m = 0, c = 0, die1, die2;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &die1, &die2);
		if(die1 > die2)
			m++;
		else if(die2 > die1)
			c++;
	}
	if(m > c)
		printf("Mishka\n");
	else if(c > m)
		printf("Chris\n");
	else
		printf("Friendship is magic!^^\n");

}