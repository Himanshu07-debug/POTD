class Solution
{
public:
    int rec(int i, int n, vector<int> &arr, vector<int> &dp)
    {

        if (i >= n)
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int c1 = arr[i] + rec(i + 2, n, arr, dp);
        int c2 = rec(i + 1, n, arr, dp);

        return dp[i] = max(c1, c2);
    }

    int findMaxSum(vector<int> &arr)
    {
        // code here
        int n = arr.size();

        vector<int> dp(n, -1);

        return rec(0, n, arr, dp);
    }
};