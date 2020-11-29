/*
	Solution to Codeforces problem 1A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	long long int m, n, a, mul1, mul2;
	scanf("%lld%lld%lld", &n, &m, &a);
	if(n%a == 0)
		mul1 = n/a;
	else
		mul1 = n/a + 1;
	if(m%a == 0)
		mul2 = m/a;
	else
		mul2 = m/a+1;
	printf("%lld\n", mul1*mul2);
}