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

void dfs(int i, int j, vector<vector<int>> &arr, int &sum, int &mx, vector<vector<int>> &vis){

    if(i < 0 || j < 0 || i >= arr.size() || j >= arr[0].size() || arr[i][j] == 0) return;

    if(vis[i][j] == 1) return;

    vis[i][j] = 1;

    sum += arr[i][j];
    
    dfs(i+1, j, arr, sum, mx, vis);
    dfs(i-1, j, arr, sum, mx, vis);
    dfs(i, j+1, arr, sum ,mx, vis);
    dfs(i, j-1, arr, sum, mx, vis);

    mx = max(mx, sum);

    sum -= arr[i][j];
    vis[i][j] = 0;

}

int getMaximumGold(vector<vector<int>>& arr) {

    int n = arr.size(), m = arr[0].size();

    int mx = 0 , sum = 0;

    vector<vector<int>> vis(n, vector<int>(m, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            dfs(i, j, arr, sum, mx, vis);

        }
    }

    return mx;
        
}