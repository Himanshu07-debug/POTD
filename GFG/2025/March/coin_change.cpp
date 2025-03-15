vector<int> dp;

int rec(int i, int sum, vector<int> &coins)
{

    if (i > sum)
        return 1e9;

    if (i == sum)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int ans = 1e9;

    for (int x : coins)
    {

        ans = min(ans, 1 + rec(i + x, sum, coins));
    }

    return dp[i] = ans;
}

int minCoins(vector<int> &coins, int sum)
{
    // Your code goes here

    dp.resize(sum + 1, -1);

    int val = rec(0, sum, coins);

    if (val == 1e9)
        return -1;

    return val;
}