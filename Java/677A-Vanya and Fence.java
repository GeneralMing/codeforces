/*
    Solution to Codeforces problem 677A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Vanya_and_Fence_677A
{
	public static void main(String[] args)
	{
		int n, h, count = 0, width;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.next());
		h = Integer.parseInt(in.next());
		int[] arr = new int[n];
		for(int i = 0; i < n; i++)
		{
			arr[i] = Integer.parseInt(in.next());
			if(arr[i] > h)
				count++;
		}
		width = n + count;
		System.out.println(width);
	}
}