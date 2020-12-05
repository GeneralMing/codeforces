/*
    Solution to Codeforces problem 96A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Football
{
	static boolean isSubstring(String s1, String s2)
	{
		int M = s1.length();
		int N = s2.length();
		for (int i = 0; i <= N - M; i++)
		{
			int j;
			for (j = 0; j < M; j++)
				if (s2.charAt(i + j) !=  s1.charAt(j))
					break;
			if (j == M)
				return true;
		}
		return false;
	}
	public static void main(String[] args)
	{
		String s;
		Scanner in = new Scanner(System.in);
		s = in.nextLine();
		if(isSubstring("1111111", s) || isSubstring("0000000", s))
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}