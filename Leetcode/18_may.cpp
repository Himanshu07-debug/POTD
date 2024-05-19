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

// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

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

