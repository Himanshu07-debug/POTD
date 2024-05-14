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

int MinimumEffort(int row, int col, vector<vector<int>> &arr) {

    vector<vector<int>> dist(row, vector<int>(col, 1e9));

    priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> pq;

    pq.push({0, {0, 0}});
    dist[0][0] = 0;

    pair<int,int> dir[4] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    while(!pq.empty()){

        int d =  pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;

        pq.pop();

        for(auto [a, b] : dir){

            int i = x + a;
            int j = y + b;

            if(i >= 0 && j >= 0 && i < row && j < col){

                int diff = max(d, abs(arr[x][y] - arr[i][j]));

                if(diff < dist[i][j]){
                    dist[i][j] = diff;
                    pq.push({diff, {i, j}});
                }

            }

        }

    }

    return dist[row-1][col - 1];

    
}