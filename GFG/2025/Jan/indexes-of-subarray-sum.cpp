vector<int> subarraySum(vector<int> &arr, int target)
{
    // code here
    unordered_map<int, int> getInd;
    int ind = 1;

    int n = arr.size();

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        // mila to
        if (sum == target)
            return {1, ind};

        int remain = sum - target;

        if (getInd.find(remain) != getInd.end())
        {
            return {getInd[remain] + 1, ind};
        }

        getInd[sum] = ind;
        ind++;
    }

    return {-1};
}