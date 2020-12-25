/*
    Solution to Codeforces problem 110A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string number;
	cin >> number;
	int output = 0;
	for(int i = 0; i < number.length(); i++)
	{
		if(number[i] =='4' || number[i] =='7')
			output++;
	}
	if(output == 4 || output == 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}