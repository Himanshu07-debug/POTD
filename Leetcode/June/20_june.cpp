#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> PBDS;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> PBDSp;


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

bool help(vector<int> &arr, int n, int m, int mid){

    int cnt = 1;
    int last = arr[0];

    for(int i=1;i<n;i++){

        if(arr[i] >= last + mid){
            cnt++;
            last = arr[i];
        }

    }

    return (cnt >= m);

}

int maxDistance(vector<int>& arr, int m) {
    
    sort(arr.begin(), arr.end());

    int n = arr.size();
    int l = 1, r = arr[n - 1];

    while(l < r){

        int mid = (l + r + 1)/2;

        if(help(arr, n, m, mid)) l = mid;
        else r = mid - 1;

    }

    return l;
        
}
