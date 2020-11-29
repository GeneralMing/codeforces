/*
	Solution to Codeforces problem 4A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Watermelon_4A
{
	public static void main(String[] args)
	{
		int w;

		Scanner scanner = new Scanner(System.in);
		w = Integer.parseInt(scanner.nextLine());
		if(w%2 != 0 || w == 2)
			System.out.println("NO");
		else
			System.out.println("YES");

	}
}