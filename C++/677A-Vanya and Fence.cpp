/*
    Solution to Codeforces problem 677A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>
 
using namespace std;

int main()
{
    int n, h, count = 0, width;
    cin >> n >> h;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > h)
            count++;
    }
    width = n+count;
    cout << width << endl;
    return 0;
}