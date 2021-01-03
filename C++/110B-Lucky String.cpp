/*
	Solution to Codeforces problem 110B
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(true)
	{
		if(n == 0)
			break;
		cout << "a";
		n--;
		if(n == 0)
			break;
		cout << "b";
		n--;
		if(n == 0)
			break;
		cout << "c";
		n--;
		if(n == 0)
			break;
		cout << "d";
		n--;
	}
	cout << endl;
}