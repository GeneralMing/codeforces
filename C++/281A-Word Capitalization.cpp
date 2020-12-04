/*
	Solution to Codeforces problem 281A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a, b = "";
	cin >> a;
	char x = a.at(0);
	if(x >= 97)
		x = x - 32;
	b += x;
	for(int i = 1; i < a.length(); i++)
		b += a.at(i);
	cout << b << endl;
	return 0;
}