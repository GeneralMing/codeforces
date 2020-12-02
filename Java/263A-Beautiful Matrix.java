/*
	Solution to Codeforces problem 263A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Beautiful_Matrix_263A 
{
	public static void main(String[] args)
	{
    	int x = -1, y = -1, count = 0;
    	boolean lock = true;
    	int[][] a = new int[5][5];
    	Scanner scanner = new Scanner(System.in);

    	for(int i = 0; i < 5; i++)
    	    for(int j = 0; j < 5; j++)
    	    {
    	        a[i][j] = Integer.parseInt(scanner.next());
    	        if(a[i][j] == 1)
    	        {
    	            x = i;
    	            y = j;
    	        }
    	    }
	    while(lock)
	    {
	        lock = false;
	        if(x > 2)
	        {
	            count++;
	            x--;
	            lock = true;
	        }
	        if(x < 2)
	        {
	            count++;
	            x++;
	            lock = true;
	        }
	        if(y > 2)
	        {
            	count++;
            	y--;
            	lock = true;
   	 	    }
    	    if(y < 2)
    	    {
    	        count++;
    	        y++;
    	        lock = true;
    	    }
    	}
    	System.out.println(count);
	}
}