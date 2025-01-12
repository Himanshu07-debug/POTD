int maxWater(vector<int> &arr)
{
    // code here
    int n = arr.size();
    if (n == 0)
        return 0;

    vector<int> Lmax(n), Rmax(n);

    Lmax[0] = arr[0];
    for (int i = 1; i < n; ++i)
    {
        Lmax[i] = max(arr[i], Lmax[i - 1]);
    }

    Rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        Rmax[i] = max(arr[i], Rmax[i + 1]);
    }

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += min(Lmax[i], Rmax[i]) - arr[i];
    }

    return ans;
}