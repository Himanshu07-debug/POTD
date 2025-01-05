int countPairs(vector<int> &arr, int target)
{
    // Your code here

    sort(arr.begin(), arr.end());

    int l = 0, r = arr.size() - 1;

    int cnt = 0;

    while (l < r)
    {

        int sum = arr[l] + arr[r];

        if (sum < target)
        {
            cnt += (r - l);
            l++;
        }
        else
        {
            r--;
        }
    }

    return cnt;
}