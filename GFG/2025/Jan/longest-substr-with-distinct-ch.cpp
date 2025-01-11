int longestUniqueSubstr(string &s)
{
    // code here
    if (s.size() == 0)
    {
        return 0;
    }
    int i = 0;
    int st = 0;
    unordered_set<int> set;
    int res = 0;
    while (i < s.size())
    {
        while (st < i && set.find(s[i]) != set.end())
        {
            set.erase(s[st]);
            st++;
        }
        res = max(res, i - st + 1);
        set.insert(s[i]);
        i++;
    }
    return res;
}