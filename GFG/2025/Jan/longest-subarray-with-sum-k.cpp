int longestSubarray(vector<int> &arr, int k)
{
    // code here
    int sum = 0;
    int maxlen = 0;
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxlen = i + 1;
        }
        if (map.find(sum - k) != map.end())
        {
            maxlen = max(maxlen, i - map[sum - k]);
        }
        if (map.find(sum) == map.end())
        {
            map[sum] = i;
        }
    }

    return maxlen;
}