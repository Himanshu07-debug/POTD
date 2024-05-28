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

int longestSubseq(int n, vector<int> &arr) {


    vector<int> dp(n, 1);

    int mx = 0;

    for(int i=1;i<n;i++){

        for(int j=0;j<i;j++){

            if(abs(arr[i] - arr[j]) == 1){
                dp[i] = max(dp[i], dp[j] + 1);
            }

        }

        mx = max(mx, dp[i]);

    }

    return mx;
        
}

