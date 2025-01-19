Node *rotate(Node *head, int k)
{
    // Your code here
    if (!head || !head->next)
        return head;

    Node *tail = head;
    int len = 1;
    while (tail->next)
    {
        tail = tail->next;
        len++;
    }

    k = k % len;
    if (k == 0)
        return head;

    // find the kth node
    k--;
    Node *temp = head;
    while (k--)
    {
        temp = temp->next;
    }

    tail->next = head;
    Node *ans = temp->next;
    temp->next = NULL;
    return ans;
}