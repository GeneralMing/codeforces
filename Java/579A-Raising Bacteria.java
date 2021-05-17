/*
    Solution to Codeforces problem 579A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Raising_Bacteria_579A
{
	public static void main(String[] args)
	{
		int n, counter = 0;
		Scanner in =  new Scanner(System.in);
		n = Integer.parseInt(in.nextLine());
		
		while(n > 1)
		{
			if(n%2 == 0)
				n = n/2;
			else
			{
				n = n-1;
				counter++;
			}
		}
		System.out.println(counter+1);
	}
}