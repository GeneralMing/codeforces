/*
    Solution to Codeforces problem 734A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Anton_and_Danik_734A
{
	public static void main(String[] args)
	{
		int a = 0, d = 0, n;
		String str;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.nextLine());
		str = in.nextLine();
		while(n-- != 0)
		{
			if(str.charAt(n) == 'A')
				a++;
			else
				d++;
		}
		if(a > d)
			System.out.println("Anton");
		else if(d > a)
			System.out.println("Danik");
		else
			System.out.println("Friendship");

	}
}