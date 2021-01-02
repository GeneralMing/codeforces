/*
    Solution to Codeforces problem 1348A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Phoenix_and_Balance_1348A
{
	public static void main(String[] args)
	{
		int t;
		Scanner in = new Scanner(System.in);
		t = Integer.parseInt(in.nextLine());
		while(t-- != 0)
		{
			int n, a, b = 0;
			n = Integer.parseInt(in.nextLine());
			a = (int)Math.pow((double)2, (double)n);
			for(int i = 0; i < n; i++)
			{
				if(i < n/2)
					a += (int)Math.pow((double)2, (double)i);
				else
					b += (int)Math.pow((double)2, (double)i);
			}
			System.out.println(a - b - 1);
		}
	}
}