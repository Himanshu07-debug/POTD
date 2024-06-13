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

long long int PowMod(long long int x,long long int n,long long int M)
{
    // Code here

    long long res = 1;

    while(n > 0){

        if(n&1){
            res = (res * x%M)%M;
        }

        x = (x * x%M)%M;

        n = n >> 1;
    } 

    return res;

}
