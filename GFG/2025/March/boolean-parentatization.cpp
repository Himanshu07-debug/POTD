//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution{
public:

    int dp[201][201][2];
    int rec(int i, int j, int isTrue, string &s){
        
        if(i == j){
            if(isTrue == 1) return (s[i] == 'T');
            else return (s[i] == 'F');
        }
        
        if(dp[i][j][isTrue] != -1) return dp[i][j][isTrue];
        
        int cnt = 0;
        
        for(int k = i+1; k < j; k+=2){
            
            int lt = rec(i, k-1, 1, s);
            int lf = rec(i, k-1, 0, s);
            int rt = rec(k+1, j, 1, s);
            int rf = rec(k+1, j, 0, s);
            
            if(s[k] == '&'){
                if(isTrue){
                    cnt = (cnt + lt*rt);
                }
                else{
                    int c = (lt*rf + rt*lf + lf*rf);
                    cnt = (cnt + c);
                }
            }
            else if(s[k] == '|'){
                if(isTrue){
                    int c = (lt*rf + rt*lf + lt*rt);
                    cnt = (cnt + c);
                }
                else{
                    cnt = (cnt + lf*rf);
                }
            }
            else{
                if(isTrue){
                    int c = (lt*rf + rt*lf);
                    cnt = (cnt + c);
                }
                else{
                    int c = (lt*rt + lf*rf);
                    cnt = (cnt + c);
                }
            }
            
        }
        
        return dp[i][j][isTrue] = cnt;
        
    }

    int countWays(string s){
        // code here
        memset(dp, -1, sizeof(dp));
        
        int n = s.size();
        
        return rec(0, n-1, 1, s);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        int ans = ob.countWays(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends