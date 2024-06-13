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


// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here

    int l = 0, r = n-1;

    while(l < r){

        int m = (l + r + 1)/2;

        if(arr[m] <= x) l = m;
        else r = m-1;
    }

    int i = l-1, j = l+1;

    if(arr[l] != x) i = l;

    vector<int> ans(k);
    int indx = 0;

    while(i >= 0 && j < n && indx < k){

        if(abs(x - arr[i]) < abs(x - arr[j])){
            ans[indx] = arr[i];
            i--;
            indx++;
        }
        else{
            ans[indx] = arr[j];
            j++;
            indx++;
        }

    }

    while(indx < k && i >= 0){
        ans[indx] = arr[i];
        i--;
        indx++;
    }

    while(indx < k && j < n){
        ans[indx] = arr[j];
        j++;
        indx++;
    }

    return ans;
        
}
};