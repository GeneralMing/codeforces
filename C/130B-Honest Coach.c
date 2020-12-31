/*
    Solution to Codeforces problem 130B
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

int compare(const void *a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--)
	{
		int min = INT_MAX;
		scanf("%d", &n);
		int athletes[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &athletes[i]);
		qsort(athletes, n, sizeof(int), compare);
		for(int i = 0; i < n-1; i++)
			if(min > abs(athletes[i] - athletes[i+1]))
				min = abs(athletes[i] - athletes[i+1]);
		printf("%d\n", min);
	}
}