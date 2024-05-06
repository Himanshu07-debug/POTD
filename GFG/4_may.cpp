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

    //Function to return a tree created from postorder and inoreder traversals.
    int indx;

node* help(int in[], int post[], int st, int en){

    if(st > en) return NULL;

    int x = post[indx];
    indx--;

    node* curr = new node(x);

    // if(root == NULL){
    //     root = curr;
    // }

    int i=st;

    for(i=st;i<=en;i++){

        if(in[i] == x){
            break;
        }

    }

    curr -> right = help(in, post, i+1, en);
    curr -> left = help(in, post, st, i-1);

    return curr;

}


node* buildTree(int in[], int post[], int n) {

    indx = n-1;

    return help(in, post, 0, n-1);

}
};
