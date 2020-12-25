/*
    Solution to Codeforces problem 110A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char number[100];
	int output = 0;

	scanf("%s", number);
	for(int i = 0; i < strlen(number); i++)
	{
		if(number[i] =='4' || number[i] =='7')
			output++;
	}
	if(output == 4 || output == 7)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}