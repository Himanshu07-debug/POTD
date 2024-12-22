package GFG.Dec;

import java.util.*;

class Solution {
    public static boolean matSearch(int mat[][], int x) {
        // your code here
        int n = mat.length;
        int m = mat[0].length;
        
        int i = 0, index = m - 1;
        
        while (i < n && index >= 0) {
            if (mat[i][index] == x) {
                return true;
            } else if (mat[i][index] > x) {
                index--;
            } else {
                i++;
            }
        }
        
        return false;
    }
}