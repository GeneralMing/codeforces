/*
	Solution to Codeforces problem 281A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Word_Capitalization_281A
{
	public static void main(String[] args)
	{
		String a, b = "";
		Scanner in = new Scanner(System.in);
		a = in.nextLine();
		char x = a.charAt(0);
		if(x >= 97)
		{
			x = (char)((int)x - 32);
		}
		b = b + x;
		for(int i = 1; i < a.length(); i++)
			b += a.charAt(i);
		System.out.println(b);
	}
}