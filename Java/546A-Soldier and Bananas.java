/*
    Solution to Codeforces problem 546A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Soldier_and_Bananas_546A
{
	public static void main(String[] args)
	{
		long k, n, w, price = 0, extra;
    	Scanner in = new Scanner(System.in);
    	k = Integer.parseInt(in.next());
    	n = Integer.parseInt(in.next());
    	w = Integer.parseInt(in.next());
    	for(int i = 1; i <= w; i++)
        	price += i*k;
    	if(n > price)
    		System.out.println(0);
    	else
    	{
    		extra = price - n;
    		System.out.println(extra);
    	}
	}
}