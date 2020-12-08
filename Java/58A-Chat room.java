/*
    Solution to Codeforces problem 58A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Chat_room_58A
{
	public static void main(String[] args)
	{
		String str, cmp = "hello";
		Scanner in = new Scanner(System.in);
		str = in.nextLine();
		int j = 0, count = 0;
		for(int i = 0; i < str.length(); i++)
		{
			if(j < cmp.length())
				if(str.charAt(i) == cmp.charAt(j))
				{
					count++;
					j++;
				}
		}
		if(count == cmp.length())
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}