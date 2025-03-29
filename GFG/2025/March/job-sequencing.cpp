//{ Driver Code Starts
// Driver code
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool static comp(pair<int, int>&a, pair<int, int>&b){
        return a.first>b.first;
    }
  
    vector<int> jobSequencing(vector<int> &deadline, 
    vector<int> &profit) {
        // code here
        int n=profit.size();
        vector<pair<int, int>>v;
        
        for(int i=0; i<n; i++){
            v.push_back({profit[i], deadline[i]});
        }
        
        sort(v.begin(), v.end(), comp);
        
        vector<int>tmp(n+1, -1);
        
        int ans=0, cnt=0;
        
        for(int i=0; i<n; i++){
            int ind=v[i].second;
            while(ind>=1 && tmp[ind]>=0){
                ind--;
            }
            if(ind>=1 && tmp[ind]<0){
                cnt++;
                ans+=v[i].first;
                tmp[ind]=v[i].second;
            }
        }
        return {cnt, ans};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> deadlines, profits;
        string temp;
        getline(cin, temp);
        int x;
        istringstream ss1(temp);
        while (ss1 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            profits.push_back(x);

        Solution obj;
        vector<int> ans = obj.jobSequencing(deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends