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

int dp[505][505];

int rec(int i, int j, string &s1, string &s2){

    if(j == s2.size()) return 1;

    if(i == s1.size()) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    if(s1[i] == s2[j]){

        return dp[i][j] = (rec(i+1, j+1, s1, s2) + rec(i+1, j, s1, s2))%MOD;

    }
    else{

        return dp[i][j] = rec(i+1, j, s1, s2);

    }

}

int countWays(string s1, string s2) {

    memset(dp, -1, sizeof(dp));

    return rec(0, 0, s1, s2);

}