/*
	Solution to Codeforces problem 118A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str, output = "";
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	for(int i = 0; i < str.length(); i++)
	{
		if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u' || str.at(i) == 'y')
			;
		else
			output = output +  "." + str.at(i);
	}
	cout << output << endl;
}