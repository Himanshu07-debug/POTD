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

    int val;
    node* left;
    node* right;

    node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }

};

class Solution {
public:

    bool postOrder(node* root){

        if(root -> left == NULL && root -> right == NULL) return root->val;

        bool v1 = postOrder(root->left);
        bool v2 = postOrder(root -> right);

        if(root -> val == 2) return v1 | v2;

        return v1 & v2;

    } 

    bool evaluateTree(node* root) {

        return postOrder(root);
        
    }
};