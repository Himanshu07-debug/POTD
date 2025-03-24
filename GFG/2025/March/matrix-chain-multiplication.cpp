//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int dp[101][101];

    int fun(int l, int r, vector<int> &arr)
    {

        if (l == r)
            return 0;

        if (dp[l][r] != -1)
            return dp[l][r];

        int mi = 1e9;

        for (int i = l; i <= r - 1; i++)
        {

            int op = arr[l - 1] * arr[i] * arr[r] + fun(l, i, arr) + fun(i + 1, r, arr);

            mi = min(mi, op);
        }

        return dp[l][r] = mi;
    }

    int matrixMultiplication(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        memset(dp, -1, sizeof(dp));

        return fun(1, n - 1, arr);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--)
    {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.matrixMultiplication(a) << endl
             << "~\n";
    }

    return 0;
}

// } Driver Code Ends