#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

// struct node{

//     int data;
//     node* left;
//     node* right;

//     node(int x){
//         data = x;
//         left = NULL;
//         right = NULL;
//     }

// };

// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int fun(int i, int j, vector<vector<int>> &arr, vector<vector<int>> &dp){

    if(i >= arr.size() || j >= arr.size() || j < 0) return 0;

    if(dp[i][j] != -1e5) return dp[i][j];

    int ans = INT_MAX;

    ans = min(ans, arr[i][j] + fun(i+1, j,arr, dp));
    ans = min(ans, arr[i][j] + fun(i+1, j-1,arr, dp));
    ans = min(ans, arr[i][j] + fun(i+1, j+1,arr, dp));

    return dp[i][j] = ans;

}

int minFallingPathSum(vector<vector<int>>& arr) {

    int n = arr.size();

    vector<vector<int>> dp(n, vector<int>(n, -1e5));

    int ans = INT_MAX;

    for(int i=0;i<n;i++){
        int sum = fun(0, i, arr, dp);
        ans = min(ans, sum);
    }

    return ans;
        
}


int minFallingPathSum(vector<vector<int>>& arr) {

    int n = arr.size();

    vector<vector<int>> dp(n, vector<int>(n, 0));

    dp[n-1] = arr[n-1];

    for(int i = n-2;i >= 0;i--){
        for(int j=0;j<n;j++){

            int ans = dp[i+1][j];

            if(j + 1 < n) ans = min(ans, arr[i][j] + dp[i+1][j+1]);

            if(j - 1 >= 0) ans = min(ans, arr[i][j] + dp[i+1][j-1]);

            dp[i][j] = ans;

        }
    }

    int res = INT_MAX;

    for(int i=0;i<n;i++){
        res = min(res, dp[0][i]);
    }

    return res;
        
}


