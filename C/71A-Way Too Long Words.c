/*
	Solution to Codeforces problem 71A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int n, i = 0;
	scanf("%d", &n);
	char word[101];
	while(i < n)
	{
		scanf("%s", word);
		if(strlen(word) > 10)
			printf("%c%ld%c\n", word[0], strlen(word) - 2, word[strlen(word)-1]);
		else
			printf("%s\n", word);
		i += 1;
	}
}