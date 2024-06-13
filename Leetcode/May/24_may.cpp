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

int rec(int i, vector<int> &cnt, int n, vector<string>& arr, vector<char>& ch, vector<int>& val){

    if(i == n) return 0;

    string s = arr[i];

    bool f = true;

    vector<int> c(256, 0);

    for(char x : s) c[x]++;

    for(int j=0;j<s.size();j++){
        if(c[s[j]] > cnt[s[j]]){
            f = false;
            break;
        }
    }

    int pick = 0;

    if(f){

        int score = 0;
        for(char x : s){
            cnt[x]--;
            score += val[x-'a'];
        } 

        pick = score + rec(i+1, cnt, n, arr, ch, val);

        for(char x : s) cnt[x]++;

    }

    int skip = rec(i+1, cnt, n, arr, ch, val);

    return max(pick, skip);

}

int maxScoreWords(vector<string>& arr, vector<char>& ch, vector<int>& val) {

    int n = arr.size();

    vector<int>cnt(256, 0);

    for(char c : ch){
        cnt[c]++;
    }

    return rec(0, cnt, n, arr, ch, val);


}

