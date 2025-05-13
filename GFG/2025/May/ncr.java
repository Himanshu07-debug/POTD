//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int r = sc.nextInt();
            Solution ob = new Solution();
            System.out.println(ob.nCr(n, r));
            System.out.println("~");
        }

        sc.close();
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public int nCr(int n, int r) {
        // code here
        long res = 1;

        if(r > n) return 0;

        if(r == 0) return 1;
        
        r = Math.min(r, n - r);

        for(int i = 0; i < r; i++){
            res *= (n - i);
            res /= (i + 1);
        }

        return (int)res;

    }

}