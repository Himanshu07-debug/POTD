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


class Solution {
public:

    vector<vector<int>> Subsets(vector<int> &arr, int i){

        if(i == arr.size()){
            return {{}};
        }

        vector<vector<int>> partial = Subsets(arr, i+1);

        vector<vector<int>> ans;

        for(vector<int> x : partial){
            
            vector<int> temp;
            temp.push_back(arr[i]);

            for(int y : x){
                temp.push_back(y);
            }

            ans.push_back(temp);
        }

        for(vector<int> x : partial){
            ans.push_back(x);
        }

        return ans;

    }   

    vector<vector<int>> subsets(vector<int>& arr) {

        vector<vector<int>> ans = Subsets(arr, 0);

        return ans;
        
    }
};