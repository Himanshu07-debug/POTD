Node *buildTree(vector<int> &in, vector<int> &pre)
{
    if (in.empty() || pre.empty())
        return NULL;

    Node *root = new Node(pre[0]); 

    auto it = find(in.begin(), in.end(), pre[0]);
    int index = distance(in.begin(), it);

    vector<int> leftIn(in.begin(), it);
    vector<int> leftPre(pre.begin() + 1, pre.begin() + 1 + index);
    vector<int> rightIn(it + 1, in.end());
    vector<int> rightPre(pre.begin() + 1 + index, pre.end());

    root->left = buildTree(leftIn, leftPre);
    root->right = buildTree(rightIn, rightPre);

    return root;
}