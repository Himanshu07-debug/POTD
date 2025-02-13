class Solution
{
public:
    Node *first;
    Node *last;
    Node *middle;
    Node *prev;
    void inorder(Node *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        if (prev != NULL && (root->data < prev->data))
        {
            if (first == NULL)
            {
                first = prev;
                middle = root;
            }
            else
            {
                last = root;
            }
        }
        prev = root;
        inorder(root->right);
    }
    void correctBST(Node *root)
    {
        // add code here.
        first = last = middle = NULL;
        prev = new Node(INT_MIN);
        inorder(root);

        if (first && last)
        {
            swap(first->data, last->data);
        }
        else if (first, middle)
        {
            swap(first->data, middle->data);
        }
    }
};