/*
    Solution to Codeforces problem 379A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int a, b, hours = 0, x, y;
	cin >> a >> b;
	while(a >= b)
	{
		y = a%b;
		x = a - y;
		hours += x;
		a = a/b;
		a = a + y;
	}
	hours += a;
	cout << hours << endl;
}