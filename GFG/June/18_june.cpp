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

int rectanglesInCircle(int r) {
        // code here
    double area;
    double diagonal;

    int cnt=0;

    for(int i=1;i<=2*r;i++)
    {
        for(int j=1;j<=2*r;j++)
        {
            diagonal=sqrt(i*i+j*j);
            if(diagonal<=(2*r)){
                cnt++;
        }
    }
}

    return cnt;
    
}