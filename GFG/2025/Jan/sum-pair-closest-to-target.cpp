vector<int> sumClosest(vector<int> &arr, int target)
{
    // code here
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int maxi = INT_MAX;
    int s = 0;
    int e = n - 1;
    int md = -1;
    vector<int> a;

    while (s < e)
    {
        int sum = arr[s] + arr[e];

        if (abs(target - sum) < abs(target - maxi) ||
            (abs(target - sum) == abs(target - maxi) && (arr[e] - arr[s] > md)))
        {
            maxi = sum;
            md = arr[e] - arr[s];
            a = {arr[s], arr[e]};
        }

        if (sum < target)
        {
            s++;
        }
        else
        {
            e--;
        }
    }

    return a;
}