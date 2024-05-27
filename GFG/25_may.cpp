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

long long max_Books(int arr[], int n, int k) {

    long long sum = 0;

    long long res = 0;

    for(int i=0;i<n;i++){

        if(arr[i] <= k) sum += arr[i];
        else{

            res = max(res, sum);

            sum = 0;

        }

    }

    res = max(res, sum);

    return res;
    
}