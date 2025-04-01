int n;
vector<bool> vis;
vector<int> ans;

void dfs(int node, vector<vector<int>> &adj)
{
    vis[node] = 1;
    ans.push_back(node);
    for (auto &ngbr : adj[node])
    {
        if (!vis[ngbr])
            dfs(ngbr, adj);
    }
}

vector<int> dfs(vector<vector<int>> &adj)
{
    // Code here
    n = adj.size();
    vis.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i, adj);
    }
    return ans;
}