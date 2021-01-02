/*
    Solution to Codeforces problem 1348A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, a = 0, b = 0;
		cin >> n;
		a = (int)pow((double)2, (double)n);
		for(int i = 1; i < n; i++)
		{
			if(i < n/2)
				a += (int)pow((double)2, (double)i);
			else
				b += (int)pow((double)2, (double)i);
		}
		cout << a - b << endl;
	}
}