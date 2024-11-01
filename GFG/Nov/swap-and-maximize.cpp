class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int i = 0, l = 0, r = n-1;
        
        vector<int> tmp(n, 0);
        
        while(l < r){
            
            tmp[i] = arr[l];
            tmp[i + 1] = arr[r];
            l++;
            r--;
            i += 2;
            
        }
        
        if(l == r) tmp[i] = arr[l];
        
        int res = 0;
        
        for(int i = 0; i < n; i++){
            
            res += abs(tmp[i%n] - tmp[(i + 1)%n]);
            
        }
        
        return res;
    }
};