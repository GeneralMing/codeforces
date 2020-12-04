/*
    Solution to Codeforces problem 266A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Stone_on_the_Table
{
	public static void main(String[] args)
	{
		int n, count = 0;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.nextLine());
		String str;
		str = in.nextLine();
		for(int i = 0; i < n-1; i++)
			if(str.charAt(i) == str.charAt(i+1))
				count++;
		System.out.println(count);
	}
}