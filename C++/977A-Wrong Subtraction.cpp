/*
    Solution to Codeforces problem 977A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    while(k--)
    {
        if(n%10)
            n--;
        else
            n = n/10;
    }
    cout << n << endl;
    return 0;
}