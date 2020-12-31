/*
    Solution to Codeforces problem 130B
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
		int min = INT_MAX;
		cin >> n;
		int athletes[n];
		for(int i = 0; i < n; i++)
			cin >> athletes[i];
		sort(athletes, athletes + n);
		for(int i = 0; i < n-1; i++)
			if(min > abs(athletes[i] - athletes[i+1]))
				min = abs(athletes[i] - athletes[i+1]);
		cout << min << endl;
	}
}