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

string replaceWords(vector<string>& arr, string str) {

    int n = str.size();

    unordered_set<string> st;

    for(string s : arr) st.insert(s);

    string res = "";

    int j = 0;

    while(j < n){

        string curr = "";
        bool f = false;

        while(j < n && str[j] != ' '){
            curr += str[j];
            if(!f && st.count(curr)){
                f = true;
                res += curr;
            }   
            j++;
        }

        if(!f){
            res += curr;
        }

        if(j < n){
            res += " ";
            j++;
        }

    }

    return res;
        
}