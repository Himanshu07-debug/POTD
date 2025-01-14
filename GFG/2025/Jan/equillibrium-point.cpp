int findEquilibrium(vector<int> &arr)
{
    // code here
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        totalSum += arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (leftSum == totalSum - leftSum - arr[i])
        {
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}