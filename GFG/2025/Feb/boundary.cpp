void RightBound(Node *root, vector<int> &ans)
{

    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        return;

    if (root->right != NULL)
    {
        RightBound(root->right, ans);
    }
    else
    {
        RightBound(root->left, ans);
    }

    ans.push_back(root->data);
}

void leftBound(Node *root, vector<int> &ans)
{

    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        return;

    ans.push_back(root->data);

    if (root->left != NULL)
    {
        leftBound(root->left, ans);
    }
    else
    {
        leftBound(root->right, ans);
    }
}

void leaves(Node *root, vector<int> &ans)
{

    if (root == NULL)
        return;

    leaves(root->left, ans);

    if (root->left == NULL && root->right == NULL)
        ans.push_back(root->data);

    leaves(root->right, ans);
}

vector<int> boundaryTraversal(Node *root)
{
    // code here

    vector<int> ans;

    if (root == NULL)
        return ans;

    ans.push_back(root->data);

    leftBound(root->left, ans);
    leaves(root->left, ans);

    leaves(root->right, ans);
    RightBound(root->right, ans);

    return ans;
}