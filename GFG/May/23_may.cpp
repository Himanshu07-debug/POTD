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


int lcs(string s1, string s2) {
    int n = s1.size();

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0)); 

    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }

    for (int i = 0; i <= n; i++) {
        dp[0][i] = 0;
    }


    for (int ind1 = 1; ind1 <= n; ind1++) {

        for (int ind2 = 1; ind2 <= n; ind2++) {

            if (s1[ind1 - 1] == s2[ind2 - 1])
                dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1]; 
            else
                dp[ind1][ind2] = max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]); 
        }

    }

    return dp[n][n]; 

}

int kPalindrome(string str, int n, int k)
{
    // code here
    string s1 = str;

    reverse(str.begin(), str.end());
    
    // vector<vector<int>> dp(n, vector<int> (n , -1));

    int x = lcs(s1, str);

    if(n - x <= k) return 1;
    else return 0;
    
}