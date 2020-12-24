/*
    Solution to Codeforces problem 160A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Twins_160A
{
	public static void sort(int[] list, int size)
	{
		int temp;
    	for(int i = 0; i < size; i++)
        	for(int j = i; j < size; j++)
        	{
        	    if(list[i] < list[j])
        	    {
       	      		temp = list[i];
                	list[i] = list[j];
                	list[j] = temp;
            	}
        	}
    	return;
	}

	public static void main(String[] args)
	{
		int n, sum = 0, check_sum = 0, count = 0, half;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.nextLine());
		int[] coins = new int[n];
		for(int i = 0; i < n; i++)
    	{
       		coins[i] = Integer.parseInt(in.next());
        	sum += coins[i];
    	}
    	sort(coins, n);
    	half = sum/2;
    
    	for(int i = 0; i < n; i++)
    	{
        	count++;
        	check_sum += coins[i];
        	if(check_sum > half)
        	    break;
    	}

    	System.out.println(count);

	}
}