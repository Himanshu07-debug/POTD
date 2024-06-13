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

int matrixScore(vector<vector<int>>& arr) {

    int n = arr.size(), m = arr[0].size();

    vector<int> col(m, 0);

    for(int i=0;i<n;i++){
        if(arr[i][0] == 0){
            for(int j=0;j<m;j++){
                if(arr[i][j] == 0){
                    arr[i][j] = 1;
                    col[j]++;
                }
            }
        }
        else{
            for(int j=0;j<m;j++){
                if(arr[i][j] == 1){
                    col[j]++;
                }
            }
        }
    }

    for(int i=0;i<m;i++){

        if(col[i] < n - col[i]){
            col[i] = n - col[i];
        }

    }

    int ans = 0;
    int p = 0;

    for(int i=m-1;i>=0;i--){
        ans += col[i]*(1<<p);
        p++;
    }

    return ans;
      
}