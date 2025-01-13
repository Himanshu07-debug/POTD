int maxWater(vector<int> &arr)
{
    // code here
    int maxi = 0;
    int n = arr.size();

    int left = 0;
    int right = n - 1;
    while (left < right)
    {

        int contain = min(arr[left], arr[right]) * (right - left);
        maxi = max(maxi, contain);

        if (arr[left] < arr[right])
            left++;
        else
            right--;
    }

    return maxi;
}