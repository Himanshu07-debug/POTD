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

node* help(node* root, int x){

    if(root == NULL) return root;

    if(root -> left == NULL && root -> right == NULL){
        if(root -> data == x){
            delete root;
            return NULL;
        }
        return root;
    }

    if(root -> left != NULL || root -> right != NULL){
        root -> left = help(root->left, x);
        root -> right = help(root -> right, x);

        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
    }

    return root;

}

node* postOrder(node* root, int x){

    if(root == NULL) return root;

    root -> left = postOrder(root->left, x);
    root -> right = postOrder(root -> right, x);

    if(root -> left == NULL && root -> right == NULL && root -> data == x){
        // delete root;
        return NULL;
    }

    return root;

}

node* removeLeafNodes(node* root, int x) {

    return help(root, x);
    
}