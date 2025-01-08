int countTriangles(vector<int> &arr)
{
    // code here
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int cnt = 0;

    for (int i = n - 1; i >= 2; i--)
    {

        int l = 0;
        int r = i - 1;

        while (l < r)
        {

            if (arr[l] + arr[r] > arr[i])
            {
                cnt += (r - l);
                r--;
            }
            else
            {
                l++;
            }
        }
    }

    return cnt;
}