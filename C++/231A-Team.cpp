/*
	Solution to Codeforces problem 231A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, count, var = 0, arr[3];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		count = 0;
		cin >> arr[0] >> arr[1] >> arr[2];
		if(arr[0] == 1)
			count++;
		if(arr[1] == 1)
			count++; 
		if(arr[2] == 1)
			count++;
		if(count >= 2)
			var++;
	}
	cout << var << endl;
}