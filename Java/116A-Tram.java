/*
    Solution to Codeforces problem 116A
    Copyright (c) GeneralMing. All rights reserved.

    https://github.com/GeneralMing/codeforces
*/

import java.util.*;
public class Tram_116A
{
    public static void main(String[] args)
    {
        int n, a, b, curr = 0, cap = 0;
        Scanner in = new Scanner(System.in);
        n = Integer.parseInt(in.next());
        for(int i = 0; i < n; i++)
        {
            a = Integer.parseInt(in.next());
            b = Integer.parseInt(in.next());
            curr -= a;
            curr += b;
            if(cap < curr)
                cap = curr;
        }
        System.out.println(cap);
    }
}