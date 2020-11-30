/*
	Solution to Codeforces problem 158A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, count = 0;
	cin >> n >> k;
	int arr[n];
	
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n, greater<int>());
	
	for(int i = 0; i < n; i++)
		if(arr[i] >= arr[k-1] && arr[i] != 0)
			count += 1;
	
	cout << count << endl;
	return 0;
}