/*
    Solution to Codeforces problem 579A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, counter = 0;
	cin >> n;
	while(n > 1)
	{
		if(n%2 == 0)
			n = n/2;
		else
		{
			n = n-1;
			counter++;
		}
	}
	cout << counter+1 << endl;
	return 0;
}
