/*
    Solution to Codeforces problem 271A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int distinct(int n[]);
 
int distinct(int n[])
{
    if(n[0] != n[1])
        if(n[0] != n[2])
            if(n[0] != n[3])
                if(n[1] != n[2])
                    if(n[1] != n[3])
                        if(n[2] != n[3])
                            return 0;
    return 1;
}
 
int main()
{
    int year;
    cin >> year;
    int not_distinct = 1, year_iter = year + 1, digits[4], num;
    while(not_distinct)
    {
        num = year_iter++;
        digits[3] = num%10;
        num = num/10;
        digits[2] = num%10;
        num = num/10;
        digits[1] = num%10;
        num = num/10;
        digits[0] = num%10;
        num = num/10;
        not_distinct = distinct(digits);
    }
    for(int i = 0; i < 4; i++)
        cout << digits[i];
    cout << endl;
    return 0;
}