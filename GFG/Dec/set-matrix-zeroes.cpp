void setMatrixZeroes(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();

    set<int> mp[3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                mp[1].insert(i);
                mp[2].insert(j);
            }
        }
    }

    for (auto row : mp[1])
    {
        for (int i = 0; i < m; i++)
        {
            mat[row][i] = 0;
        }
    }

    for (auto col : mp[2])
    {
        for (int i = 0; i < n; i++)
        {
            mat[i][col] = 0;
        }
    }
}