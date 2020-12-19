/*
    Solution to Codeforces problem 266B
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>
 
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    
    string queue;
    cin >> queue;
    for(int i = 0; i < t; i++)
        for(int j = 0; j < n-1; j++)
        {
            if((queue.at(j) == 'B') && (queue.at(j+1) == 'G'))
            {
                queue.at(j) = 'G';
                queue.at(++j) = 'B';
            }
        }
    cout << queue << endl;
    return 0;
}