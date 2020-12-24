/*
    Solution to Codeforces problem 160A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;
 
void sort(int list[], int size);
 
void sort(int list[], int size)
{
    int temp;
    for(int i = 0; i < size; i++)
        for(int j = i; j < size; j++)
        {
            if(list[i] < list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    return;
}
 
int main()
{
    int n, sum = 0, check_sum = 0, count = 0, half;
    cin >> n;
    int coins[n];
    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }
    
    sort(coins, n);
    
    half = sum/2;
    
    for(int i = 0; i < n; i++)
    {
        count++;
        check_sum += coins[i];
        if(check_sum > half)
            break;
    }
    cout << count << endl;
    return 0;
}