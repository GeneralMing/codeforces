/*
	Solution to Codeforces problem 263A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;
 
int main()
{
    int a[5][5], x, y, lock = 1, count = 0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    while(lock)
    {
        lock = 0;
        if(x > 2)
        {
            count++;
            x--;
            lock = 1;
        }
        if(x < 2)
        {
            count++;
            x++;
            lock = 1;
        }
        if(y > 2)
        {
            count++;
            y--;
            lock = 1;
        }
        if(y < 2)
        {
            count++;
            y++;
            lock = 1;
        }
    }
    cout << count << endl;
    return 0;
}