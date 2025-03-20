vector<vector<vector<long long>>> memo;
int dp(int index, bool buy, vector<int> &prices, int k)
{
    if (index == prices.size() || k == 0)
    {

        return 0;
    }
    if (memo[index][buy][k] != -1)
    {
        return memo[index][buy][k];
    }
    int ans = dp(index + 1, buy, prices, k);
    if (buy)
    {
        ans = max(ans, -prices[index] + dp(index + 1, false, prices, k));
    }
    else
    {
        ans = max(ans, prices[index] + dp(index + 1, true, prices, k - 1));
    }
    return memo[index][buy][k] = ans;
}
int maxProfit(vector<int> &prices)
{
    // code here
    int k = 2;
    int n = prices.size();
    memo.assign(n, vector<vector<long long>>(2, vector<long long>(k + 1, -1)));
    return dp(0, true, prices, k);
}