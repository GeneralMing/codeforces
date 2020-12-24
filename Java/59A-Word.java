/*
    Solution to Codeforces problem 59A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Word_59A
{
	public static void main(String[] args)
	{
		String str;
		int upper = 0, lower = 0;
		Scanner in = new Scanner(System.in);
		str = in.nextLine();
		for(int i = 0; i < str.length(); i++)
			if(Character.isUpperCase(str.charAt(i)))
				upper++;
			else
				lower++;
		if(lower >= upper)
			for(int i = 0; i < str.length(); i++)
				System.out.printf("%c", Character.toLowerCase(str.charAt(i)));
		else
			for(int i = 0; i < str.length(); i++)
				System.out.printf("%c", Character.toUpperCase(str.charAt(i)));
		System.out.printf("\n");
	}
}