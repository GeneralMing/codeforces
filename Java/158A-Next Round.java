/*
	Solution to Codeforces problem 158A
	Copyright (c) GeneralMing. All rights reserved.

	https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Next_Round_158A
{
	public static void main(String[] args)
	{
		String[] inp;
		int n, k, count = 0, i = 0;
		Scanner scanner = new Scanner(System.in);

		inp = scanner.nextLine().split(" ", 0);
		n = Integer.parseInt(inp[0]);
		k = Integer.parseInt(inp[1]);
		inp = scanner.nextLine().split(" ", 0);
		int[] arr = new int[inp.length];
		
		while(i < n)
		{
			arr[i] = Integer.parseInt(inp[i]);
			i += 1;
		}
		
		Arrays.sort(arr);
		for(int j = 0; j < n/2; j++)
		{
			int temp = arr[j];
			arr[j] = arr[n-j-1];
			arr[n-j-1] = temp;
		}
		
		for(int j = 0; j < n; j++)
		{
			if(arr[j] >= arr[k-1] && arr[j] != 0)
				count += 1;
		}
		
		System.out.println(count);
	}
}