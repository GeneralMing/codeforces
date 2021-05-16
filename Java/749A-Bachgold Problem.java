/*
    Solution to Codeforces problem 749A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Bachgold_Problem_749A
{
	public static void main(String[] args)
	{
		int n;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.nextLine());
		if(n >= 4)
		{
			System.out.println(n/2);
			if(n%2 == 0)
			{
				for(int i = 0; i < n/2-1; i++)
				{
					System.out.printf("%d ", 2);
				}
				System.out.printf("2\n");
			}
			else
			{
				for(int i = 0; i < n/2-1; i++)
				{
					System.out.printf("%d ", 2);
				}
				System.out.printf("3\n");

			}
		}
		else if(n == 2)
		{
			System.out.println("1");
			System.out.println("2");
		}
		else
		{
			System.out.println("1");
			System.out.println("3");
		}
	}
}