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

void makeseive(bool seive[], int n){

    seive[0] = 0;
    seive[1] = 0;

    for(int i=2;i*i<=n;i++){

        if(seive[i] == 1){
            for(int j=i*i;j<=n;j += i){

                seive[j] = 0;

            }
        }

    }

}


 vector<int> getPrimes(int n) {
    
    bool seive[n + 1];

    memset(seive, 1, sizeof(seive));

    makeseive(seive, n);

    int a = -1, b = -1;

    for(int i=2;i<n;i++){

        if(seive[i] == 1 && seive[n-i] == 1){

            if(a == -1){
                a = i;
                b = n-i;
                break;
            }

        }

    }

    return {a, b};

    }