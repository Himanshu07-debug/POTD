//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int minCost(vector<vector<int>>& houses) {
        // code here
        int n=houses.size();
        vector<int>vis(n);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({0,0});
        int ans=0;
        auto manhattan=[&](vector<int>&a,vector<int>&b){
            return abs(a[0]-b[0])+abs(a[1]-b[1]);
        };
        while(!q.empty()){
            auto f=q.top();
            q.pop();
            int i=f.second;
            int d=f.first;
            if(vis[i]) continue;
            vis[i]=1;
            ans+=d;
            for(int j=0;j<n;j++){
               if(!vis[j]){
                 int c=manhattan(houses[i],houses[j]);
                 q.push({c,j});
               }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> edges;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 2; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;

        cout << obj.minCost(edges);
        cout << "\n";
        cout << "~" << endl;
    }
}

// } Driver Code Ends