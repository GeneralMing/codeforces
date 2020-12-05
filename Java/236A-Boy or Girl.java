/*
	Solution to Codeforces problem 236A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Boy_or_Girl
{
	public static void main(String[] args)
	{
		String str;
		int count = 0;
		int[] arr = new int[26];
		Scanner in = new Scanner(System.in);
		str = in.nextLine();
		for(int i = 0; i < 26; i++)
			arr[i] = 0;
		for(int i = 0; i < str.length(); i++)
			arr[(int)str.charAt(i)-(int)'0'-49]++;
		for(int i = 0; i < 26; i++)
			if(arr[i] > 0)
				count++;
		if(count%2 == 1)
			System.out.println("IGNORE HIM!");
		else
			System.out.println("CHAT WITH HER!");

	}
}