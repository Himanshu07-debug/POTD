#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

class Solution {
public:
    int compareVersion(string v1, string v2) {

        int i = 0, j = 0;

        while(i < v1.size() || j < v2.size()){

            int s1 = 0 , s2 = 0;

            while(i < v1.size() && v1[i] != '.'){
                s1 = s1*10 + (v1[i] - '0');
                i++;
            }

            while(j < v2.size() && v2[j] != '.'){
                s2 = s2*10 + (v2[j] - '0');
                j++;
            }

            if(s1 < s2) return -1;
            else if(s1 > s2) return 1;
            else{
                if(i < v1.size() && v1[i] == '.') i++;
                if(j < v2.size() && v2[j] == '.') j++;
            }

        }

        return 0;
        
    }
};