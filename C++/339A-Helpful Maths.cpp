/*
    Solution to Codeforces problem 339A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	char inp[101];
	int arr[101], i = 0;
	cin >> inp;
	char *token = strtok(inp, "+");
	while(token != NULL)
	{
		arr[i++] = token[0] - '0';
		token = strtok(NULL, "+");
	}
	int n = i;
	sort(arr, arr + n);
	for(int j = 0; j < n-1; j++)
	{
		cout << arr[j] << '+';
	}
	cout << arr[i-1] << endl;

}