/*
    Solution to Codeforces problem 116A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, b, a, curr = 0, cap = 0;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> a >> b;
        curr -= a;
        curr += b;
        if(cap < curr)
            cap = curr;
    }
    
    cout << cap << endl;
    return 0;
}