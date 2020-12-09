/*
    Solution to Codeforces problem 617A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Elephant
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		int n, step, rem;
		n = Integer.parseInt(in.next());
		rem = n%5;
		if(rem > 0)
			step = n/5 + 1;
		else
			step = n/5;
		System.out.println(step);
	}
}