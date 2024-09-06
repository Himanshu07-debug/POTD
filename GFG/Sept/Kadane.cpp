int kadane(int i, int started, vector<int>& arr , vector<vector<int>> &dp){

    if(i == arr.size()){
        if(started) return 0;
        else return INT_MIN;
    }

    if(dp[i][started] != INT_MAX ) return dp[i][started];

    if(started){
        return dp[i][started] = max(0, arr[i] + kadane(i+1, started, arr, dp));
    }
    else{
        return dp[i][started] = max(kadane(i + 1, started, arr, dp) , arr[i] + kadane(i+1, 1-started, arr, dp  ));
    }

}


int maxSubArray(vector<int>& arr) {

    vector<vector<int>> dp(arr.size() , vector<int> (2, INT_MAX));

    return kadane(0, 0, arr, dp);
        
}
