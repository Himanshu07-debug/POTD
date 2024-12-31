int longestConsecutive(vector<int> &arr)
{
    unordered_set<int> a(arr.begin(), arr.end());
    int c = 0;

    for (i : a)
    {
        if (a.find(i - 1) == a.end())
        {
            int curr = i;
            int stk = 1;

            while (a.find(curr + 1) != a.end())
            {
                curr++;
                stk++;
            }
            c = max(c, stk);
        }
    }
    return c;
}