int rec(Node *root, int &ans)
{

    if (!root)
        return 0;

    int l = rec(root->left, ans);
    int r = rec(root->right, ans);

    int x = root->data;

    ans = max({ans, x + l, x + r, l + x + r, x});

    return max({l + x, r + x, x});
}

int findMaxSum(Node *root)
{
    // code here

    int ans = INT_MIN;

    int tmp = rec(root, ans);

    return ans;
}