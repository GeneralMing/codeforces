/*
    Solution to Codeforces problem 271A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Beautiful_Year
{
	public static boolean distinct(int[] n)
	{
		if(n[0] != n[1])
    	    if(n[0] != n[2])
    	        if(n[0] != n[3])
    	            if(n[1] != n[2])
    	                if(n[1] != n[3])
    	                    if(n[2] != n[3])
        	                    return false;
    	return true;
	}
	public static void main(String[] args)
	{
		int year;
		Scanner in = new Scanner(System.in);
		year = Integer.parseInt(in.nextLine());
		int year_iter = year + 1, num;
		boolean not_distinct = true;
		int[] digits = new int[4];
		while(not_distinct)
		{
			num = year_iter++;
        	digits[3] = num%10;
        	num = num/10;
        	digits[2] = num%10;
        	num = num/10;
        	digits[1] = num%10;
        	num = num/10;
        	digits[0] = num%10;
        	num = num/10;
        	not_distinct = distinct(digits);
		}
		for(int i = 0; i < 4; i++)
			System.out.printf("%d", digits[i]);
		System.out.printf("\n");
	}
}