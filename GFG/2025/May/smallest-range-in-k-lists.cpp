//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findSmallestRange(vector<vector<int>>& arr) {
        // code here
        int k = arr.size();  

        vector<int> range = {0, 100000};

        int max_ele = INT_MIN;

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        for (int i = 0; i < k; i++) {
            pq.push({arr[i][0], i, 0});
            max_ele = max(max_ele, arr[i][0]);
        }

        while (!pq.empty()) {
            vector<int> top = pq.top();  
            pq.pop();
            
            int min_ele = top[0];    
            int list = top[1];       
            int list_idx = top[2];   

            if ((max_ele - min_ele) < (range[1] - range[0])) {
                range = {min_ele, max_ele};
            }

            if (list_idx + 1 < arr[list].size()) {
                int next_val = arr[list][list_idx + 1];
                pq.push({next_val, list, list_idx + 1});
                
                max_ele = max(max_ele, next_val);
            } else {
                break;
            }
        }

        return range;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> arr(k, vector<int>(n));

        for (int i = 0; i < k; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];

        Solution obj;
        vector<int> range = obj.findSmallestRange(arr);
        cout << range[0] << " " << range[1] << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends