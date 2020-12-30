/*
    Solution to Codeforces problem 490A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Team_Olympiad_490A
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		int n, m, prog = 0, math = 0, pe = 0;
		n = Integer.parseInt(in.next());
		int[] students = new int[n];
		for(int i = 0; i < n; i++)
		{
			students[i] = Integer.parseInt(in.next());
			switch(students[i])
			{
				case 1: prog++;
						break;
				case 2: math++;
						break;
				case 3: pe++;
						break;
			}
		}
		m = Math.min(Math.min(prog, math), pe);
		if(m == 0)
			System.out.println(m);
		else
		{
			int a = 0, b = 0, c = 0;
			int[] arr1 = new int[prog];
			int[] arr2 = new int[math];
			int[] arr3 = new int[pe];
			for(int i = 0; i < n; i++)
			{
				if(students[i] == 1)
					arr1[a++] = i+1;
				else if(students[i] == 2)
					arr2[b++] = i+1;
				else
					arr3[c++] = i+1;
			}
			System.out.println(m);
			for(int i = 0; i < m; i++)
				System.out.printf("%d %d %d\n", arr1[i], arr2[i], arr3[i]);
		}

	}
}