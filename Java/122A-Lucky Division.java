/*
    Solution to Codeforces problem 122A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Lucky_Division_122A
{
	public static void main(String[] args)
	{
		int n, count = 0, m[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.nextLine());
		for(int i = 0; i < 14; i++)
			if(n % m[i] == 0)
				count++;
		if(count > 0)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}