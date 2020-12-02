/*
	Solution to Codeforces problem 112A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Petya_and_Strings_112A
{
	public static void main(String[] args)
	{
		String a, b;
		Scanner scanner = new Scanner(System.in);
		a = scanner.nextLine();
		b = scanner.nextLine();
		a = a.toLowerCase();
		b = b.toLowerCase();
		if(a.equals(b))
			System.out.println(0);
		else if(a.compareTo(b) < 0)
			System.out.println(-1);
		else
			System.out.println(1);
	}
}