/*
    Solution to Codeforces problem 41A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Translation_41A
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);

		StringBuilder str1 = new StringBuilder();
		str1.append(in.nextLine());
		str1 = str1.reverse();

		StringBuilder str2 = new StringBuilder();
		str2.append(in.nextLine());

		if(str1.toString().equals(str2.toString()))
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}