bool isSubsetSum(vector<int>& arr, int sum) {
    sort(arr.begin(),arr.end());
    vector<int>dp1(sum+1,0),dp2(sum+1,0);
    dp1[0]=1; dp2[0]=1;
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<=sum;j++) if(dp1[j]||(arr[i]<=j && dp1[j-arr[i]])) dp2[j]=1;
        dp1=dp2;
    }
     return dp1[sum];
 }