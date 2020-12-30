/*
    Solution to Codeforces problem 703A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Mishka_and_Game_703A
{
	public static void main(String[] args)
	{
		int n, m = 0, c = 0, die1, die2;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.next());
		for(int i = 0; i < n; i++)
		{
			die1 = Integer.parseInt(in.next());
			die2 = Integer.parseInt(in.next());
			if(die1 > die2)
				m++;
			else if(die2 > die1)
				c++;
		}
		if(m > c)
			System.out.println("Mishka");
		else if(c > m)
			System.out.println("Chris");
		else
			System.out.println("Friendship is magic!^^");
	}
}