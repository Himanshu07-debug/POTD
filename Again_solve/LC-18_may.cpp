#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

struct TreeNode{

    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        data = x;
        left = NULL;
        right = NULL;
    }

};


// Famous question...
// was easy .. but i do not get it....

// dont go in the trouble to maintain give and take value....

// if req == +ve ---> give
// if req == -ve ---> take

// steps will be calculated at each parent node with childs ... that how much it will send to child...

// becz answer to surely aayenga hi....

int step;

int postOrder(TreeNode* root){

    if(root == NULL) return 0;

    int left = postOrder(root -> left);
    int right = postOrder(root -> right);

    step += abs(left) + abs(right);

    int req = (root->data - 1) + left + right;

    return req;

}

int distributeCoins(TreeNode* root) {

    step = 0;

    int x = postOrder(root);

    return step;
    
}

