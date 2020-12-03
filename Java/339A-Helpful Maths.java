/*
    Solution to Codeforces problem 339A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Helpful_Maths_339A
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		String[] inp;
		inp = in.nextLine().split("\\+", -2);
		int[] arr = new int[inp.length];
		int i = 0;
		for(String a: inp)
			arr[i++] = Integer.parseInt(a);
		Arrays.sort(arr);
		for(int j = 0; j < i-1; j++)
			System.out.printf("%d%c", arr[j], '+');
		System.out.printf("%d\n", arr[i-1]);
	}
}