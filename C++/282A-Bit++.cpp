/*
	Solution to Codeforces problem 282A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, x = 0;
	bool flag;
	string inp;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		flag = false;
		cin >> inp;
		for(int j = 0; j < inp.length(); j++)
			if(inp.at(j) == '+')
				flag = true;
		if(flag)
			x += 1;
		else
			x -= 1;
	}
	cout << x << endl;
}