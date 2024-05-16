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

class Solution {
public:
    bool isSafe(vector<vector<int>> &pre, int safeDist, vector<pair<int,int>> &dir){

    int n = pre.size();

    queue<pair<int,int>> q;
    vector<vector<int>> vis(n, vector<int>(n, 0));

    if(pre[0][0] < safeDist){
        return false;
    }

    q.push({0, 0});
    vis[0][0] = 1;

    while(!q.empty()){

        int a = q.front().first;
        int b = q.front().second;

        q.pop();

        if(a == n-1 && b == n-1) return true;

        for(auto [x, y] : dir){

            int c = a + x;
            int d = b + y;

            if(c >= 0 && d >= 0 && c < n && d < n){

                if(pre[c][d] < safeDist || vis[c][d] == 1) continue;

                vis[c][d] = 1;

                q.push({c, d});

            }

        }

    }

    return false;

}


int maximumSafenessFactor(vector<vector<int>>& arr) {

    int n = arr.size();

    queue<pair<int,int>> q;

    vector<vector<int>> pre(n, vector<int>(n, 0));

    vector<vector<int>> vis(n, vector<int>(n, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 1){
                q.push({i, j});
                vis[i][j] = 1;
            }
        }
    }

    vector<pair<int,int>> dir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    int dist = 0;

    while(!q.empty()){

        int z = q.size();

        for(int i=0;i<z;i++){

            int a = q.front().first;
            int b = q.front().second;
            q.pop();

            pre[a][b] = dist;

            for(auto [x, y] : dir){

                int c = a + x;
                int d = b + y;

                if(c >= 0 && d >= 0 && c < n && d < n && vis[c][d] == 0){

                    q.push({c, d});
                    vis[c][d] = 1;

                }

            }

        }

        dist++;

    }

    int l = 0, h = dist;

    int ans = 0;

    while(l <= h){

        int mid = l + (h - l)/2;

        if(isSafe(pre, mid, dir)){
            ans = mid;
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }

    }

    return ans;
        
}
};