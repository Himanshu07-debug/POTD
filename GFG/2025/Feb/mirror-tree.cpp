
void rec(Node *root)
{

    if (root == NULL)
        return;

    rec(root->left);
    rec(root->right);

    Node *t = root->left;
    root->left = root->right;
    root->right = t;
}

void mirror(Node *node)
{
    // code here

    rec(node);
}