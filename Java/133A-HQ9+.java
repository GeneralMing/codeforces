/*
    Solution to Codeforces problem 133A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class HQ9_plus_133A
{
	public static void main(String[] args)
	{
		int flag = 0;
		String str;
		Scanner in = new Scanner(System.in);
		str = in.nextLine();
		for(int i = 0; i < str.length(); i++)
			if(str.charAt(i) == 'H' || str.charAt(i) == 'Q' || str.charAt(i) == '9')
				flag++;
		if(flag == 0)
			System.out.println("NO");
		else
			System.out.println("YES");
	}
}