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

int pre(vector<int> &arr, int m){

    int c = 0;

    for(int x : arr){

        if(x >= m) c++;

    }

    return (c >= m);

}

 int specialArray(vector<int>& arr) {

    int l = 0, r = arr.size();

    while(l < r){

        int m = (l + r + 1)/2;

        if(pre(arr, m)) l = m;
        else r = m-1;

    }

    int c = 0;

    for(int x : arr){
        if(x >= l) c++;
    }
        
    if(c == l) return l;
    else return -1;
    
}