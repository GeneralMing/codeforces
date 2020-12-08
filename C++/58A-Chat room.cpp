/*
    Solution to Codeforces problem 58A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str, cmp = "hello";
	cin >> str;
	int j = 0, count = 0;
	for(int i = 0; i < str.length(); i++)
	{
		if(j < cmp.length())
			if(str.at(i) == cmp.at(j) || j >= cmp.length())
			{
				count++;
				j++;
			}
	}
	if(count == cmp.length())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}