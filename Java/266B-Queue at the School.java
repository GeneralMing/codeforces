/*
	Solution to Codeforces problem 266B
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Queue_at_the_School_266B
{
	public static void main(String[] args)
	{
		int n, t;
		Scanner in = new Scanner(System.in);
		n = Integer.parseInt(in.next());
		t = Integer.parseInt(in.next());
		in.nextLine();
		String queue;
		int[] arr = new int[n];
		queue = in.nextLine();
		for(int i = 0; i < n; i++)
		{
			if(queue.charAt(i) == 'G')
				arr[i] = 1;
			else
				arr[i] = 0;
		}
		for(int i = 0; i < t; i++)
        	for(int j = 0; j < n-1; j++)
       		{
            	if((arr[j] == 0) && (arr[j+1] == 1))
            	{
                	arr[j] = 1;
                	arr[++j] = 0;
            	}
        	}
        for(int i = 0; i < n; i++)
        	if(arr[i] == 1)
        		System.out.print('G');
			else
				System.out.print('B');
		System.out.print('\n');
	}
}