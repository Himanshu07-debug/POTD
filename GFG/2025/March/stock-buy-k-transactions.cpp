int maxProfit(vector<int>& A, int K) {
    // code here
    int N = A.size();
    if (N <= 1 || K == 0) {
        return 0;
    }

    if (K >= N / 2) {
        int maxProfit = 0;
        for (int i = 1; i < N; ++i) {
            if (A[i] > A[i - 1]) {
                maxProfit += A[i] - A[i - 1];
            }
        }
        return maxProfit;
    }

    vector<vector<int>> dp(K + 1, vector<int>(N, 0));

    for (int k = 1; k <= K; ++k) {
        int maxDiff = -A[0];
        for (int i = 1; i < N; ++i) {
            dp[k][i] = max(dp[k][i - 1], A[i] + maxDiff);
            maxDiff = max(maxDiff, dp[k - 1][i] - A[i]);
        }
    }

    return dp[K][N - 1];
}