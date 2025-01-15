int maxLen(vector<int> &a)
{
    int ans = 0, sum = 0;
    map<int, int> m;
    m[0] = -1;
    for (int i = 0; i < a.size(); i++)
    {

        if (a[i])
            sum++;
        else
            sum--;

        if (m.find(sum) == m.end())
            m[sum] = i;
        else
            ans = max(ans, i - m[sum]);
    }

    return ans;
}