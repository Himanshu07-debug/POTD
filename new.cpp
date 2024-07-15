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

int numberOfSubarrays(vector<int>& nums, int k) {

    int n = nums.size();

    int odd = 0, cnt = 0;

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){

        if(nums[i]&1) odd++;

        if(odd == k) cnt++;

        if(mp.count(odd - k)){
            cnt += mp[odd - k];
        }
        
        mp[odd]++;

    }

    return cnt;

}