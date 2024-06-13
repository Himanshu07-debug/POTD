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


bool check(vector<int> &arr, int k, double m){

    int cnt = 0;

    for(int i=1;i<arr.size();i++){

        cnt += (arr[i] - arr[i-1])/m;

    }

    return (cnt <= k);

}


double findSmallestMaxDist(vector<int> &arr, int k) {
    
    double l = 0, r = 0;

    for(int i=1;i<arr.size();i++){
        r = max(r, (arr[i] - arr[i-1])*1.0);
    }

    for(int i=0;i<100;i++){

        double m = (l + r)/2;

        if(check(arr, k, m)) r = m;
        else l = m;

    }

    return r;
        
}

