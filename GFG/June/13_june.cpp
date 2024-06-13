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

int padovanSequence(int n) {
        // code here.
        if(n <= 2) return 1;
        
        int mod = 1e9 + 7;
        
        int a = 1, b = 1, c = 1;
        
        for(int i=3;i<=n;i++){
           int d = (a + b)%mod;
           a = b;
           b = c;
           c = d;
        }
        
        return c;
}