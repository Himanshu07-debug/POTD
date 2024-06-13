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

class Solution
{
    public:
    
    void inorder(node* root, int k, vector<int> &ans){

    if(root == NULL) return;

    if(k == 0){
        ans.push_back(root->data);
        return;
    }

    inorder(root->left, k-1, ans);
    inorder(root->right, k-1, ans);

}


    vector<int> Kdistance(struct node *root, int k)
    {
        vector<int> ans;

        inorder(root, k, ans);

        return ans;

    }
};

