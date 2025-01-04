int countTriplets(vector<int> &arr, int target)
{
    // Code Here

    int n = arr.size(), cnt = 0;

    for (int i = 0; i < n; i++)
    {

        int t = target - arr[i];

        int l = i + 1, r = n - 1;

        while (l < r)
        {

            int sum = arr[l] + arr[r];

            if (sum == t)
            {

                int a = 1, b = 1;

                while (l + 1 < r && arr[l + 1] == arr[l])
                {
                    l++;
                    a++;
                }

                while (r - 1 > l && arr[r - 1] == arr[r])
                {
                    r--;
                    b++;
                }

                if (arr[l] != arr[r])
                    cnt += a * b;
                else
                    cnt += (a * (a + 1) / 2);

                l++;
                r--;
            }
            else if (sum > t)
                r--;
            else
                l++;
        }
    }

    return cnt;
}