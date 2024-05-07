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

vector<int> reverseLevelOrder(node *root)
{
    // code here

    queue<node*> q;
    q.push(root);

    vector<int> ans;

    while(!q.empty()){

        int z = q.size();

        for(int i=0;i<z;i++){

            node* curr = q.front();
            q.pop();

            ans.push_back(curr->data);
            
            if(curr -> right != NULL) q.push(curr -> right);

            if(curr -> left != NULL) q.push(curr -> left);

        }

    }

    reverse(ans.begin(), ans.end());

    return ans;
    
    
}