class Solution
{
public:
    int rec(int i, int n, string &digits, vector<int> &dp)
    {

        if (i == n)
            return 1;

        if (digits[i] == '0')
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int c1 = rec(i + 1, n, digits, dp);

        int c2 = 0;

        if (i < n - 1)
        {
            int val = (digits[i] - '0') * 10 + (digits[i + 1] - '0');
            if (val <= 26)
            {
                c2 = rec(i + 2, n, digits, dp);
            }
        }

        return dp[i] = c1 + c2;
    }

    int countWays(string &digits)
    {
        // Code here
        int n = digits.size();

        vector<int> dp(n, -1);

        return rec(0, n, digits, dp);
    }
};
