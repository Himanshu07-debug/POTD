//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
     int n = arr.size();
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            // cout<< mid <<endl;
            if(arr[mid] == target)
            {
                return mid;
            }
            else if( mid > 0 && arr[mid-1] == target)
            {
                return mid-1;
            }
            else if(mid < n-1 && arr[mid+1] == target)
            {
                return mid+1;
            }
            if(arr[mid] > target)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
              return -1;   
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int target;
        cin >> target;
        cin.ignore();
        Solution sln;
        int ans = sln.findTarget(arr, target);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends