/*
    Solution to Codeforces problem 546A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    long int k, n, w, price = 0, extra;
    cin >> k;
    cin >> n;
   	cin >> w;
    for(int  i = 1; i <= w; i++)
        price += i*k;
    if(n > price)
    {
    	cout << 0 << endl;
        return 0;
    }
    extra = price - n;
    cout << extra << endl;
    
    return 0;
}