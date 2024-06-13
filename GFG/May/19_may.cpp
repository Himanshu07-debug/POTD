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

int findClosest( int n, int k,int arr[]) 
{ 
    // Complete the function
    int l = 0, r = n-1;

    while(l < r){

        int m = (l + r + 1)/2;

        if(arr[m] <= k) l = m;
        else r = m-1;

    }

    if(l + 1 < n && (k - arr[l]) >= (arr[l+1] - k)) return arr[l+1];
    else return arr[l];

}