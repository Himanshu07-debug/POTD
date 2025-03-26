//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool wordBreak(string &s, vector<string> &dictionary) {

        // code here

        int n=s.size();

        vector<bool>dp(n+1,false);

        dp[0]=true;

        int maxl=0;

        for(const string &word:dictionary){

            maxl=max(maxl,(int)word.size());

        }

        unordered_set<string>dict(dictionary.begin(),dictionary.end());

        for(int i=1;i<=n;i++){

            for(int j=max(0,i-maxl);j<i;j++){

                if(dp[j]&&dict.find(s.substr(j,i-j))!=dict.end()){

                    dp[i]=true;

                    break;

                }

            }

        }

        return dp[n];

    }
};


//{ Driver Code Starts.

vector<string> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> res;
    while (ss >> str) {
        res.push_back(str);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cin.ignore();
        vector<string> dictionary = inputLine();

        Solution ob;
        if (ob.wordBreak(s, dictionary)) {
            cout << "true\n";
        } else
            cout << "false\n";
        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends