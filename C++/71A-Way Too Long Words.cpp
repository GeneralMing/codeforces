/*
	Solution to Codeforces problem 71A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, i = 0;
	cin >> n;
	string word;
	while(i < n)
	{
		cin >> word;
		if(word.length() > 10)
			cout << word[0] << word.length() - 2 << word[word.length()-1] << endl;
		else
			cout << word << endl;
		i += 1;
	}
}