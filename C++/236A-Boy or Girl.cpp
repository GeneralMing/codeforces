/*
    Solution to Codeforces problem 236A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int arr[26], count = 0;
    string str;
    
    for(int i = 0; i < 26; i++)
        arr[i] = 0;
    
    cin >> str;
    
    for(int i = 0; i < str.length(); i++)
        arr[str[i]-'0' - 49]++;
    
    for(int i = 0; i < 26; i++)
        if(arr[i] > 0)
            count++;
    if(count%2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    return 0;
}