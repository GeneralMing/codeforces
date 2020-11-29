/*
	Solution to Codeforces problem 71A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Way_Too_Many_Words_71A
{
	public static void main(String[] args)
	{	
		String word;
		int n;
		int i = 0;

		Scanner scanner = new Scanner(System.in);
		n = Integer.parseInt(scanner.nextLine());
		while(i < n)
		{
			word = scanner.nextLine();
			if(word.length() > 10)
				System.out.println(word.charAt(0) + Integer.toString(word.length()-2) + word.charAt(word.length()-1));
			else
				System.out.println(word);
			i += 1;
		}
	}
}