/*
    Solution to Codeforces problem 110A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Nearly_Lucky_Number_110A
{
	public static void main(String[] args)
	{
		String number;
		int output = 0;
		Scanner in = new Scanner(System.in);
		number = in.nextLine();
		for(int i = 0; i < number.length(); i++)
			if(number.charAt(i) == '4' || number.charAt(i) == '7')
				output++;
		if(output == 4 || output == 7)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}