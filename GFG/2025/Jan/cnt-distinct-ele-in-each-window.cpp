vector<int> countDistinct(vector<int> &arr, int k)
{
    // code here.
    vector<int> ans;

    unordered_map<int, int> um;
    int i = 0;
    int n = arr.size();
    for (i = 0; i < k; i++)
    {
        um[arr[i]]++;
    }

    ans.push_back(um.size());

    while (i < n)
    {
        um[arr[i]]++;
        um[arr[i - k]]--;

        if (um[arr[i - k]] == 0)
            um.erase(arr[i - k]);

        ans.push_back(um.size());

        i++;
    }

    return ans;
}