/*
    Solution to Codeforces problem 41A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    string str1, str2;
    cin >> str1 >> str2;
    reverse(str1.begin(), str1.end());
    if(str1 == str2)
    	cout << "YES" << endl;
    else
    	cout << "NO" << endl;
    return 0;
}