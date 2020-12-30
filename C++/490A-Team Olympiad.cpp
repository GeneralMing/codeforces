/*
    Solution to Codeforces problem 490A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int min(int a, int b)
{
	if(a > b)
		return b;
	else
		return a;
}

int main()
{
	int n, m, prog = 0, math = 0, pe = 0;
	cin >> n;
	int students[n];
	for(int i = 0; i < n; i++)
	{
		cin >> students[i];
		switch(students[i])
		{
			case 1: prog++;
					break;
			case 2: math++;
					break;
			case 3: pe++;
					break;
		}
	}
	m = min(min(prog, math), pe);
	if(m == 0)
		cout << m << endl;
	else
	{
		int a = 0, b = 0, c = 0;
		int arr1[prog], arr2[math], arr3[pe];
		for(int i = 0; i < n; i++)
		{
			if(students[i] == 1)
				arr1[a++] = i+1;
			else if(students[i] == 2)
				arr2[b++] = i+1;
			else
				arr3[c++] = i+1;
		}
		cout << m << endl;
		for(int i = 0; i < m; i++)
			cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
	}
}