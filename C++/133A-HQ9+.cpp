/*
    Solution to Codeforces problem 133A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int flag = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++)
        if(str.at(i) == 'H' || str.at(i) == 'Q' || str.at(i) == '9')
            flag++;
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}