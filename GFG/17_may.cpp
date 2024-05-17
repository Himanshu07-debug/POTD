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

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        set<int> st;
        
        for(int y : arr){
            if(st.count(x+y) || st.count(-x + y) ) return 1;
            st.insert(y);
        }
        
        return -1;
    }
};