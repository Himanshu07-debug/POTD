int solve(int index, vector<int>& arr){
    int n=arr.size();
    int prev2=0, prev1=arr[index];
    for(int i=index+1;i<n;i++){
        int curr=max(arr[i]+prev2,prev1);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
int maxValue(vector<int>& arr) {
    int ans1=solve(1,arr);
    arr.pop_back();
    int ans2=solve(0,arr);
    return max(ans1,ans2);
}

