/*
    Solution to Codeforces problem 734A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;
 
int main()
{
    int n, a = 0, d = 0;
    cin >> n;
    string str;
    cin >> str;
    
    while(n--)
    {
        if(str.at(n) == 'A')
            a++;
        else
            d++;
    }
    
    if(a > d)
        cout << "Anton" << endl;
    else if(d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}