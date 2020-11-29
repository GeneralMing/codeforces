/*
	Solution to Codeforces problem 1A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Theatre_Square_1A
{
	public static void main(String[] args)
	{
		long m, n, a, mul1, mul2;
		String input;
		Scanner scanner = new Scanner(System.in);
		input = scanner.nextLine();
		n = Integer.parseInt(input.split(" ")[0]);
		m = Integer.parseInt(input.split(" ")[1]);
		a = Integer.parseInt(input.split(" ")[2]);

		if(n%a == 0)
			mul1 = n/a;
		else
			mul1 = n/a + 1;
		if(m%a == 0)
			mul2 = m/a;
		else
			mul2 = m/a + 1;
		System.out.println(mul1*mul2);
	}
}