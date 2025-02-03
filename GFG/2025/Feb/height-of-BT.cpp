int rec(Node *root)
{

    if (root == NULL)
        return -1;

    return max(rec(root->left), rec(root->right)) + 1;
}

int height(Node *node)
{
    // code here
    return rec(node);
}