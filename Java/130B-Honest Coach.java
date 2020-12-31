/*
    Solution to Codeforces problem 130B
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Honest_Coach_130B
{
	public static void main(String[] args)
	{
		int n, t;
		Scanner in = new Scanner(System.in);
		t = Integer.parseInt(in.next());
		while(t-- != 0)
		{
			int min = Integer.MAX_VALUE;
			n = Integer.parseInt(in.next());
			int[] athletes = new int[n];
			for(int i = 0; i < n; i++)
				athletes[i] = Integer.parseInt(in.next());
			Arrays.sort(athletes, 0, n);
			for(int i = 0; i < n-1; i++)
				if(min > Math.abs(athletes[i] - athletes[i+1]))
					min = Math.abs(athletes[i] - athletes[i+1]);
			System.out.println(min);
		}
	}
}