/*
	Solution to Codeforces problem 69A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Young_Physicist_69A
{
	public static void main(String[] args)
	{
		int n, num;
		int[] arr = new int[3];
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.nextLine());
		for(int i = 0; i < 3; i++)
			arr[i] = 0;
		
		for(int i = 0; i < n; i++)
		{
			arr[0] += Integer.parseInt(in.next());
			arr[1] += Integer.parseInt(in.next());
			arr[2] += Integer.parseInt(in.next());
		}

		if(arr[0] != 0 || arr[1] != 0 || arr[2] != 0)
			System.out.println("NO");
		else
			System.out.println("YES");
	}
}