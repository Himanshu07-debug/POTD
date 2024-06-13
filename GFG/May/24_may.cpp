#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

struct node{

    int data;
    node* left;
    node* right;

    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }

};

// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

class Solution {
  public:
  
  long long MOD = 1e9 + 7;
  
    int subsetSumUtil(int ind, int target, vector<int>& arr, vector<vector<int>>& dp) {

    // If we have reached the first element in 'arr'
    if (ind == 0){
        if(target == 0 && arr[0] == 0) return 2;
        else if(target == 0 || target == arr[0]) return 1;
        else return 0;
    }


    // If the result for this subproblem has already been computed, return it
    if (dp[ind][target] != -1)
        return dp[ind][target];


    int notTaken = subsetSumUtil(ind - 1, target, arr, dp);

    int taken = 0;
    if (arr[ind] <= target)
        taken = subsetSumUtil(ind - 1, target - arr[ind], arr, dp);


    return dp[ind][target] = (notTaken + taken) % MOD;

}

int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.

    int sum = 0;

    for(int x : arr) sum += x;

    if(sum - d < 0 || (sum - d) % 2) return 0;

    int target = (sum - d)/2;

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));

    return subsetSumUtil(n-1, target , arr, dp);

}
};