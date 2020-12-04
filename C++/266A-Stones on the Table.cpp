/*
    Solution to Codeforces problem 266A
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
    string str;
    cin >> str;
    
    for(int i = 0; i < n-1 ; i++)
        if(str.at(i) == str.at(i+1))
            count++;
    
    printf("%d\n", count);
    return 0;
}