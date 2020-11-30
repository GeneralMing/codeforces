/*
	Solution to Codeforces problem 118A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class String_Task_118A
{
	public static void main(String[] args)
	{
		String str, output = "";
		Scanner scanner = new Scanner(System.in);
		str = scanner.nextLine();
		str = str.toLowerCase();
		for(int i = 0; i < str.length(); i++)
		{
			if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u' || str.charAt(i) == 'y')
				;
			else
				output = output + "." + str.charAt(i);
		}
		System.out.println(output);
	}
}