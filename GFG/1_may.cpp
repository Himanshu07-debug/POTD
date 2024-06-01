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

string oddEven(string s) {

    int x = 0, y = 0;

    int cnt[26] = {0};

    for(char c : s) cnt[c - 'a']++;

    for(int i=0;i<26;i++){
        if(cnt[i] > 0){
            if((i&1) && !(cnt[i]&1)) x++;
            else if(!(i&1) && (cnt[i]&1)) y++;
        }
        
    }

    if((x + y)&1) return "ODD";
    else return "EVEN";

}