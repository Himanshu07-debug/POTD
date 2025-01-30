bool isSafe(int x, int y, int n, vector<vector<int>> &grid)
{

    int i = x, j = y;
    i--;

    while (i >= 0)
    {
        if (grid[i][j] == 1)
            return false;
        i--;
    }

    i = x - 1, j = y - 1;

    while (i >= 0 && j >= 0)
    {
        if (grid[i][j] == 1)
            return false;
        i--;
        j--;
    }

    i = x, j = y;

    i--;
    j++;

    while (i >= 0 && j < n)
    {
        if (grid[i][j] == 1)
            return false;
        i--;
        j++;
    }

    return true;
}

void rec(int row, int n, vector<vector<int>> &grid, vector<vector<int>> &ans, vector<int> &path)
{

    if (row == n)
    {
        ans.push_back(path);
        return;
    }

    for (int i = 0; i < n; i++)
    {

        if (isSafe(row, i, n, grid))
        {
            path.push_back(i + 1);
            grid[row][i] = 1;

            rec(row + 1, n, grid, ans, path);

            grid[row][i] = 0;
            path.pop_back();
        }
    }
}

vector<vector<int>> nQueen(int n)
{
    // code here
    vector<vector<int>> ans;
    vector<int> path;

    vector<vector<int>> grid(n, vector<int>(n, 0));

    rec(0, n, grid, ans, path);

    return ans;
}