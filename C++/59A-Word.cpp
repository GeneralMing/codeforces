/*
    Solution to Codeforces problem 59A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int upper = 0, lower = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++)
        if(str.at(i) > 96)
            lower++;
        else
            upper++;
    if(lower >= upper)
    	for(int i = 0; i < str.length(); i++)
            str[i] = tolower(str[i]);
    else
    	for(int i = 0; i < str.length(); i++)
            str[i] = toupper(str[i]);
    cout << str << endl;
    return 0;
}