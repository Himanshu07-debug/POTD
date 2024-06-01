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

int dp[1001];

int rec(int w, int n, vector<int> &cost){

    if(w == 0) return 0;

    if(w < 0) return 1e9;

    if(dp[w] != -1) return dp[w];

    int ans = 1e9;

    for(int i=0;i<n;i++){

        if(cost[i] == -1) continue;

        int res = rec(w - (i+1), n, cost) + cost[i];

        ans = min(ans, res);

    }

    return dp[w] = ans;

}

int minimumCost(int n, int w, vector<int> &cost) {
    
    memset(dp, -1, sizeof(dp));

    return rec(w, n, cost);

}