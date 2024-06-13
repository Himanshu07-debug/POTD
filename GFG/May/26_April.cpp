#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

vector<int> FindExitPoint(int n, int m, vector<vector<int>>& arr) {

    int i = 0, j = 0;

    int dir = 1;

    while(i >= 0 && j >= 0 && i < n && j < m){

        if(arr[i][j] == 1){
            arr[i][j] = 0;
            if(dir == 1) dir = -2;
            else if(dir == -1) dir = 2;
            else if(dir == 2) dir = 1;
            else dir = -1; 
        }

        if(dir == 1) j++;
        else if(dir == -1) j--;
        else if(dir == 2) i--;
        else if(dir == -2) i++;

    }

    if(dir == 1) j--;
    else if(dir == -1) j++;
    else if(dir == 2) i++;
    else if(dir == -2) i--;

    return {i, j};
    
}

