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

int maxProfitAssignment(vector<int>& d, vector<int>& pro, vector<int>& w) {
        
    int m = w.size(), n = pro.size();

    int sum = 0;

    for(int i=0;i<m;i++){

        int curr = 0;

        for(int j=0;j<n;j++){

            if(d[j] <= w[i]) curr = max(curr, pro[j]);

        }

        sum += curr;

    }        

    return sum;

}



// second -------------------->>

int maxProfitAssignment(vector<int>& d, vector<int>& pro, vector<int>& w) {
        
    int m = w.size(), n = pro.size();

    vector<pair<int,int>> arr;

    for(int i=0;i<n;i++){

        arr.push_back({d[i], pro[i]});

    }

    sort(arr.begin(), arr.end());
    sort(w.begin(), w.end());

    int sum = 0;

    int i = 0, j = 0;

    int mx = 0;
    while(i < m){

        while(j < n && arr[j].first <= w[i]){
            mx = max(mx, arr[j].second);
            j++;
        }

        sum += mx;

        i++;

    }

    return sum;

}

    