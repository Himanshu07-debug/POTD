//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        int n = str.size();
        
        unordered_set<char> st;
        
        for(char c : str) st.insert(c);
        
        int cnt = st.size();
        
        unordered_map<char, int> mp;
        
        int ans = INT_MAX;
        
        int i = 0, j = 0;
        
        while(j < n){
            
            mp[str[j]]++;
            
            while(i <= j && mp.size() == cnt){
                mp[str[i]]--;
                if(mp[str[i]] == 0) mp.erase(str[i]);
                ans = min(ans, j - i + 1);
                i++;
            }
            
            j++;
            
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends