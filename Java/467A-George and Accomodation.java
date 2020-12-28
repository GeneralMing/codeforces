/*
    Solution to Codeforces problem 467A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class George_and_Accomodation_467A
{
	public static void main(String[] args)
	{
		int count = 0, n;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.next());
		int[] p = new int[n];
		int[] q = new int[n];
		for(int i = 0; i < n; i++)
		{
			p[i] = Integer.parseInt(in.next());
			q[i] = Integer.parseInt(in.next());
			if(q[i]-p[i] > 1)
				count++;
		}
		System.out.println(count);
	}
}