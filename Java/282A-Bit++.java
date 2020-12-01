/*
	Solution to Codeforces problem 282A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Bit_282A
{
	public static void main(String[] args)
	{
		String inp;
		int n, x = 0;
		boolean flag;
		Scanner scanner = new Scanner(System.in);
		n = Integer.parseInt(scanner.nextLine());
		for(int i = 0; i < n; i++)
		{
			flag = false;
			inp = scanner.nextLine();
			for(int j = 0; j < inp.length(); j++)
				if(inp.charAt(j) == '+')
					flag = true;
			if(flag)
				x += 1;
			else
				x -= 1;
		}

		System.out.println(x);
	}
}