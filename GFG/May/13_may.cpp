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

void cnt(int src, vector<int> &vis, vector<int> gr[], int &ec , int &vc ){

    vc++;
    ec += gr[src].size();
    vis[src] = 1;

    for(int x : gr[src]){
        if(vis[x] == 0){
            cnt(x, vis, gr, ec, vc);
        }
    }



}


int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {

   vector<int> gr[v+1];

   for(auto x : edges){
    gr[x[0]].push_back(x[1]);
    gr[x[1]].push_back(x[0]);
   }

   vector<int> vis(v+1, 0);

   int ans = 0;

   for(int i=1;i<=v;i++){

        if(vis[i] == 0){
            int ec = 0, vc = 0;
            cnt(i, vis, gr, ec, vc);

            if(ec == vc*(vc -1)) ans++;

        }
   }

   return ans;
        
}