vector<int> intersectionWithDuplicates(vector<int> &a, vector<int> &b)
{
    // code here
    unordered_map<int, int> map;
    for (auto i : a)
    {
        map[i] = 1;
    }

    vector<int> ans;
    for (auto i : b)
    {
        if (map[i] == 1)
        {
            map[i] = 0;
            ans.push_back(i);
        }
    }

    return ans;
}