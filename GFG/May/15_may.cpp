//User function Template for C++
#include <bits/stdc++.h>
using namespace std;

class DisjointSet {

public:

    vector<int> parent, size;
    DisjointSet(int n) {

        parent.resize(n + 1);
        size.resize(n + 1);

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }

    }

    int findUPar(int node) {

        if (node == parent[node])
            return node;

        return parent[node] = findUPar(parent[node]);

    }


    void unionBySize(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if (ulp_u == ulp_v) return;

        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }

};


class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &arr) {
        // code here
        int n = arr.size();

        DisjointSet ds(n);

        unordered_map<string, int> mp;


        // DSU creation

        for(int i=0;i<n;i++){

            for(int j=1;j < arr[i].size();j++){

                if(mp.find(arr[i][j]) == mp.end()){
                    mp[arr[i][j]] = i;
                }
                else{
                    // Same aaya, iska parent indx stored hai
                    ds.unionBySize(i, mp[arr[i][j]]);
                }

            }

        }

        vector<string> mapMail[n];

        for(auto x : mp){

            int boss = ds.findUPar(x.second);

            mapMail[boss].push_back(x.first);

        }

        vector<vector<string>> ans;

        for(int i=0;i<n;i++){

            // empty
            if(mapMail[i].size() == 0) continue;

            sort(mapMail[i].begin(), mapMail[i].end());

            vector<string> tmp;
            tmp.push_back(arr[i][0]);

            for(string s : mapMail[i]){
                tmp.push_back(s);
            }

            ans.push_back(tmp);

        }

        return ans;
    }
};