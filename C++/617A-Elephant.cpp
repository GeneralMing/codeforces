/*
    Solution to Codeforces problem 617A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, step, rem;
    cin >> n;
    rem = n%5;
    if(rem)
        step = n/5 + 1;
    else
        step = n/5;
    cout << step << endl;
    return 0;
}