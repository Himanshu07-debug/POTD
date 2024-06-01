#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> PBDS;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> PBDSp;


#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

int dp[100005];

int rec(int n, int x, int y){

    if(n==1||n==x||n==y){
        return dp[n]=1;
    }

    if(dp[n] != -1) return dp[n];
    
    int c1 = 1, c2 = 1, c3 = 1;

    if(n >= x) c1 = rec(n-x, x, y);

    if(n >= y) c2 = rec(n-y, x, y);

    if(n >= 1) c3 = rec(n-1, x, y);

    if(c1 == 0 || c2 == 0 || c3 == 0) return dp[n] = 1;

    return dp[n] = 0;

}

int findWinner(int n, int x, int y) {

    memset(dp, -1, sizeof(dp));

    return rec(n, x, y);
    
}