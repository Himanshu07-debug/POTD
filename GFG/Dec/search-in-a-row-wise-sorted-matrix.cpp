bool rowCheck(int row, int m, vector<vector<int>> &mat, int x)
{
    int low = 0;
    int high = m - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int val = mat[row][mid];
        if (val == x)
            return true;
        else if (val > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}

bool searchRowMatrix(vector<vector<int>> &mat, int x)
{
    // code here
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        bool a = rowCheck(i, m, mat, x);
        if (a == true)
            return true;
    }
    return false;
}