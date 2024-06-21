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

string compareFrac(string str) {

    // Code here
    int i = 0;
    int a = 0, b = 0, c = 0, d = 0;
    
    while(i < str.size() && isdigit(str[i])){
        a = a*10 + (str[i] - '0');
        i++;
    }
    
    i++;
    
    while(i < str.size() && isdigit(str[i])){
        b = b*10 + (str[i] - '0');
        i++;
    }
    
    int j = i;
    
    i += 2;
    
    while(i < str.size() && isdigit(str[i])){
        c = c*10 + (str[i] - '0');
        i++;
    }
    
    i++;
    
    while(i < str.size() && isdigit(str[i])){
        d = d*10 + (str[i] - '0');
        i++;
    }
    
    int k = i - (j + 2);
    
//   cout << a << " " << b << " " << c << " " << d << endl;
    
    if(a*d > b*c) return str.substr(0, j);
    else if(a*d < b*c) return str.substr(j+2, k);
    else return "equal";
}