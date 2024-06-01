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

int equalSubstring(string s, string t, int x) {

    int n = s.size();

    int sum = 0, res = 0;

    int i=0, j = 0;

    while(j < n){

        sum += abs(s[j] - t[j]);

        while(i <= j && sum > x){
            sum -= abs(s[i] - t[i]);
            i++;
        }

        res = max(res, j - i + 1);

        j++;

    }

    return res;
        
}