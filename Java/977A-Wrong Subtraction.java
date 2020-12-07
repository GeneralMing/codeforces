/*
    Solution to Codeforces problem 977A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Wrong_Subtraction_977A
{
	public static void main(String[] args)
	{
		int n, k;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.next());
		k = Integer.parseInt(in.next());
		while(k != 0)
		{
			if(n%10 > 0)
				n--;
			else
				n = n/10;
			k--;
		}
		System.out.println(n);
	}
}