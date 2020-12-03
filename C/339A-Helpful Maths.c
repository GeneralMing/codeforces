/*
    Solution to Codeforces problem 339A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void * a, const void * b) 
{ 
	return (*(int*)a - *(int*)b); 
}

int main()
{
	char inp[101];
	int arr[101], i = 0;
	scanf("%s", inp);
	char *token = strtok(inp, "+");
	while(token != NULL)
	{
		arr[i++] = token[0] - '0';
		token = strtok(NULL, "+");
	}
	int n = i;
	qsort(arr, n, sizeof(int), compare);
	for(int j = 0; j < n-1; j++)
	{
		printf("%d%c" , arr[j], '+');
	}
	printf("%d\n", arr[n-1]); 
	return 0;
}