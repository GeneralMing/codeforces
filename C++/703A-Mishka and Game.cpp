/*
    Solution to Codeforces problem 703A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, m = 0, c = 0, die1, die2;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> die1 >> die2;
		if(die1 > die2)
			m++;
		else if(die2 > die1)
			c++;
	}
	if(m > c)
		cout << "Mishka" << endl;
	else if(c > m)
		cout << "Chris" << endl;
	else
		cout << "Friendship is magic!^^" << endl;

}