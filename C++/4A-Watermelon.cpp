/*
	Solution to Codeforces problem 4A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include <iostream>

using namespace std;

int main()
{
	int w;
	cin >> w;
	if(w%2 != 0 or w == 2)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}