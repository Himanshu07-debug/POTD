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

 int longestSubseq(int n, const vector<int> &a)
{
    map<int, int> dp;
    int ans = 1;

    for (size_t i = 0; i < n; i++)
    {
        dp[a[i]] = max(dp[a[i]], 1);
        
        if (dp.count(a[i] - 1))
            dp[a[i]] = max(dp[a[i]], dp[a[i] - 1] + 1);

        if (dp.count(a[i] + 1))
            dp[a[i]] = max(dp[a[i]], dp[a[i] + 1] + 1);

        ans = max(ans, dp[a[i]]);
    }

    return ans;
}

// in O(n) + O(n)