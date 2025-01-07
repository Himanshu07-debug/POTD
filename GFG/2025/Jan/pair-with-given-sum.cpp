int countPairs(vector<int> &arr, int target)
{
    int i = 0;
    int j = arr.size() - 1;
    int cnt = 0;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            int index1 = i + 1;
            int index2 = j - 1;
            while (index1 < j && arr[i] == arr[index1])
            {
                cnt++;
                index1++;
            }
            while (index2 > i && arr[j] == arr[index2])
            {
                cnt++;
                index2--;
            }
            i++;
            j--;
            cnt++;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return cnt;
}