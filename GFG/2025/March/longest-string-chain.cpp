int longestStringChain(vector<string>& words) {
    // Code here
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.size() < b.size();
    });

    unordered_map<string, int> dp;
    int longest = 1;

    for (string& word : words) {
        dp[word] = 1;
        for (int i = 0; i < word.size(); ++i) {
            string s = word.substr(0, i) + word.substr(i + 1);
            if (dp.find(s) != dp.end()) {
                dp[word] = max(dp[word], dp[s] + 1);
            }
        }
        longest = max(longest, dp[word]);
    }

    return longest;
}