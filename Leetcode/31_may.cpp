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

vector<int> singleNumber(vector<int>& arr) {

    int y = 0;

    for(int x : arr){
        y ^= x;
    }

    int pos = 0;

    // Remember --> as in constraint, arr[i] can be -ve, if y came -ve, last bit while loop nhi nikal payega.. if y > 0
    while(y != 0){
        if(y&1) break;
        pos++;
        y /= 2;
    }

    int a = 0, b = 0;

    for(int x : arr){

        if((x&(1<<pos))) a ^= x;
        else b ^= x;

    }

    return {a, b};
        
}