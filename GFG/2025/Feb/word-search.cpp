bool rec(vector<vector<char>> &mat, string &word, int i, int j, int k, int m, int n, int x)
{

    if (k == x)
        return true;

    if (i < 0 || j < 0 || i >= m || j >= n || mat[i][j] != word[k])
        return false;

    char ch = mat[i][j];

    mat[i][j] = '#';

    if (rec(mat, word, i + 1, j, k + 1, m, n, x))
        return true;
    if (rec(mat, word, i - 1, j, k + 1, m, n, x))
        return true;
    if (rec(mat, word, i, j + 1, k + 1, m, n, x))
        return true;
    if (rec(mat, word, i, j - 1, k + 1, m, n, x))
        return true;

    mat[i][j] = ch;

    return false;
}

bool isWordExist(vector<vector<char>> &mat, string &word)
{
    // Code here

    int x = word.size();
    int m = mat.size(), n = mat[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (mat[i][j] == word[0])
            {
                if (rec(mat, word, i, j, 0, m, n, x))
                {
                    return true;
                }
            }
        }
    }

    return false;
}