/*
    Solution to Codeforces problem 791A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a;
    cin >> b;
    while(a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count << endl;
 
    return 0;
}