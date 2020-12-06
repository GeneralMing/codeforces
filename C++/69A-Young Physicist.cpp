/*
    Solution to Codeforces problem 69A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int arr[3];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        arr[0] += num;
        cin >> num;
        arr[1] += num;
        cin >> num;
        arr[2] += num;
    }
    if(!(arr[0] || arr[1] ||arr[2]))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}