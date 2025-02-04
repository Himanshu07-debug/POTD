int rec(Node *root, int &mx)
{

    if (root == NULL)
        return 0;

    int l = rec(root->left, mx);
    int r = rec(root->right, mx);

    mx = max(mx, l + r);

    return max(l, r) + 1;
}

int diameter(Node *root)
{
    // Your code here

    int mx = 0;

    int t = rec(root, mx);

    return mx;
}