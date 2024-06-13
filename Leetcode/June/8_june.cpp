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

bool checkSubarraySum(vector<int>& arr, int k) {

    int sum = 0;

    unordered_map<int,int> mp;

    for(int i=0;i<arr.size();i++){

        sum += arr[i];

        if(sum%k == 0 && i > 0) return true;

        if(mp.find(sum%k) != mp.end()){
            if(i - mp[sum%k] > 1){
                return true;
            }
        }   
        else{
            mp[sum%k] = i;
        }

    }
    
    return false;
}