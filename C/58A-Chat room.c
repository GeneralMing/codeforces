/*
    Solution to Codeforces problem 58A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[101], cmp[] ="hello" ;
	scanf("%s", str);
	int n = strlen(str), j = 0, count = 0;
	for(int i = 0; i < n; i++)
	{
		if(j < strlen(cmp))
			if(str[i] == cmp[j])
			{
				count++;
				j++;
			}
	}
	if(count == strlen(cmp))
		printf("YES\n");
	else
		printf("NO\n");
}