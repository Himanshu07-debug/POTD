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

int swapNibbles(int n) {
        // code here

    int c = 0;
    int ans = 0;

    while(n > 0){

        if(n & 1){

            if(c < 4){
                ans += 16*(1<<c);
            }
            else{
                ans += (1 << c)/16;
            }

        }

        c++;

        n /= 2;

        
    }

    return ans;
    
}

// O(1) --------------->>>

// int v1 = (n >> 4);
// int v2 = (n&15)*16;

// return v1 + v2;