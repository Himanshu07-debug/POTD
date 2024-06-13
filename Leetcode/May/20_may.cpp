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


int subsetXORSum(vector<int>& nums) {

    int n = nums.size();

    int x = pow(2, n) - 1;

    int res = 0;

    for(int i=1;i<=x;i++){

        int y = i;
        int ans = 0;
        int indx = n-1;

        while(y > 0){
            if(y&1) ans ^= nums[indx];
            indx--;
            y = y >> 1;
        }

        res += ans;

    }

    return res;

}