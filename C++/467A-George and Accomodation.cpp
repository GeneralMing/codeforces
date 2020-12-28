/*
    Solution to Codeforces problem 467A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;
 
int main()
{
    int n, count = 0;
    cin >> n;
    int p[n], q[n];
 
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
        cin >> q[i];
        if((q[i]-p[i]) > 1)
            count++;
    }
    cout << count <<endl;
 
    return 0;
}