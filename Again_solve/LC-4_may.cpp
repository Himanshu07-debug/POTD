#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

// struct node{

//     int data;
//     node* left;
//     node* right;

//     node(int x){
//         data = x;
//         left = NULL;
//         right = NULL;
//     }

// };

// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;





class Solution {
public:
     int numRescueBoats(vector<int>& arr, int limit) {

    int cnt = 0;

    sort(arr.begin(), arr.end());

    int i = 0, j = arr.size() - 1;

    while(i < j){

        int sum = arr[i] + arr[j];

        if(sum <= limit){
            cnt++;
            i++;
            j--;
        }
        else{
            j--;
            cnt++;
        }

    }

    if(i == j){
        cnt++;
    }

    return cnt;
 
    }
};
