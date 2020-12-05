/*
    Solution to Codeforces problem 96A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<iostream>
#include<string>

using namespace std;

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return 1;
    }
 
    return 0;
}

int main()
{
	string n;
    cin >> n;
	if(isSubstring("1111111", n) || isSubstring("0000000", n))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}