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

void zigZag(int n, vector<int> &arr) {
        // code here

    for(int i=1;i<n;i+=2){

        if(arr[i] < arr[i-1] ) swap(arr[i], arr[i-1]);

        if(i < n - 1 && arr[i] < arr[i+1] ) swap(arr[i], arr[i+1]);

    }

}