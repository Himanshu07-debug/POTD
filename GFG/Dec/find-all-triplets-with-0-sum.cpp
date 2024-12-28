vector<vector<int>> findTriplets(vector<int> &arr)
{
    // Code here
    map<int, vector<pair<int, int>>> mp;
    set<vector<int>> res;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int two_sum = arr[i] + arr[j];
            mp[two_sum].push_back({i, j});
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int tar = -arr[i];
        if (mp.find(tar) != mp.end())
        {
            for (auto const &p : mp[tar])
            {
                if (p.first != i && p.second != i)
                {
                    vector<int> vec = {i, p.first, p.second};
                    sort(vec.begin(), vec.end());
                    res.insert(vec);
                }
            }
        }
    }

    vector<vector<int>> answer(res.begin(), res.end());
    return answer;
}