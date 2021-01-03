/*
	Solution to Codeforces problem 110B
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Lucky_String_110B
{
	public static void main(String[] args)
	{
		int n;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.next());
		while(true)
		{
			if(n == 0)
				break;
			System.out.printf("a");
			n--;
			if(n == 0)
				break;
			System.out.printf("b");
			n--;
			if(n == 0)
				break;
			System.out.printf("c");
			n--;
			if(n == 0)
				break;
			System.out.printf("d");
			n--;
		}
		System.out.println("");
	}

}