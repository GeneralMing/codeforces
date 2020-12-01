/*
	Solution to Codeforces problem 50A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Domino_Piling_50A
{
	public static void main(String[] args)
	{
		int m, n, o;
		String[] str;
		Scanner scanner = new Scanner(System.in);
		str = scanner.nextLine().split(" ");
		m = Integer.parseInt(str[0]);
		n = Integer.parseInt(str[1]);
		o = (m*n)/2;
		System.out.println(o);
	}
}