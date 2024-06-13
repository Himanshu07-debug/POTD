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



int maxOccured(int n, int l[], int r[], int maxx) {

    int dp[maxx + 2];

    memset(dp, 0, sizeof(dp));

    for(int i=0;i<n;i++){

        dp[l[i]]++;
        dp[r[i] + 1]--;

    }

    int mx = dp[0];
    int ans = 0;

    for(int i=1;i<=maxx;i++){
        dp[i] += dp[i-1];
        if(dp[i] > mx){
            mx = dp[i];
            ans = i;
        }
    }

    return ans;

}
