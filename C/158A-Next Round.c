/*
	Solution to Codeforces problem 158A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void * a, const void * b) 
{ 
	return (*(int*)b - *(int*)a); 
}

int main()
{
	int n, k, count = 0;
	scanf("%d%d", &n, &k);
	int arr[n];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	qsort(arr, n, sizeof(int), compare);
	
	for(int i = 0; i < n; i++)
		if(arr[i] >= arr[k-1] && arr[i] != 0)
			count += 1;
	
	printf("%d\n", count);
	return 0;
}