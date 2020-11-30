/*
	Solution to Codeforces problem 118A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char str[101], output[202];
	int j = 0;
	scanf("%s", str);
	for(int i = 0; i < strlen(str); i++)
		str[i] = tolower(str[i]);

	for(int i = 0; i < strlen(str); i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
			;
		else
		{
			output[j] = '.';
			output[++j] = str[i];
			j++;
		}
	}
	output[j] = '\0';
	printf("%s\n", output);
}