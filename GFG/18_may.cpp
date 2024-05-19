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
 
int findPeakElement(vector<int>& a) 
{
    // Code here
    int l = 0, r = a.size()-1;

    while(l < r){

        int m = (l + r + 1)/2;

        if(a[m] > a[m-1]) l = m;
        else r = m - 1;

    }

    return a[l];
    
}