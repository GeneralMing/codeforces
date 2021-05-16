/*
    Solution to Codeforces problem 749A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n >= 4)
	{
		if (n % 2 == 0)
		{
			cout << n/2 << endl;
			for (int i = 0; i < n / 2; i++)
				cout << 2 << " ";
			cout << endl;
		}
		else
		{
			cout << n/2 << endl;
			for (int i = 0; i < n / 2 - 1; i++)
				cout << 2 << " ";
			cout << 3 << endl;
		}
	}
	else if (n == 2)
		cout << 1 << endl << 2 << endl;
	else
		cout << 1 << endl << 3 << endl;
	return 0;
}
