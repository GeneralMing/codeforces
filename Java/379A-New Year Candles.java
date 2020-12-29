/*
    Solution to Codeforces problem 379A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class New_Year_Candles_379A
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		int a, b, x, y, hours = 0;
		a = Integer.parseInt(in.next());
		b = Integer.parseInt(in.next());
		while(a >= b)
		{
			y = a%b;
			x = a - y;
			hours += x;
			a = a/b;
			a = a + y;
		}
		hours += a;
		System.out.println(hours);
	}
}