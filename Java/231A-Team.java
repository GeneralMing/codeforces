/*
	Solution to Codeforces problem 231A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Team_231A
{
	public static void main(String[] args)
	{
		String c;
		int count = 0, var = 0;
		Scanner scanner = new Scanner(System.in);
		int n = Integer.parseInt(scanner.nextLine());
		for (int i = 0; i < n; i++)
		{
			count = 0;
			c = scanner.nextLine();
			for(int j = 0; j < c.length(); j++)
				if(c.charAt(j) == '1')
				{
					count += 1;
				}
			if(count >= 2)
				var += 1;
		}
		System.out.println(var);

	}
}