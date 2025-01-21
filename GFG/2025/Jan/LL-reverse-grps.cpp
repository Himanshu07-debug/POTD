pair<Node *, Node *> reverseGroup(Node *prevHead, Node *head, Node *tail)
{
    Node *curr = head, *next, *prev = NULL, *tailNext = tail->next;
    while (curr != tail)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if (curr == tail)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = tailNext;
    if (prevHead)
        prevHead->next = tail;
    return {tail, head};
}

// including head
Node *kthPosition(Node *head, int k)
{
    int cnt = 1;
    while (head->next != NULL && cnt < k)
    {
        head = head->next;
        cnt++;
    }
    return head;
}

Node *reverseKGroup(Node *head, int k)
{
    Node *curr = head, *prev = NULL, *next, *res = NULL;
    pair<Node*, Node *> temp;
    do
    {
        next = kthPosition(curr, k);
        temp = reverseGroup(prev, curr, next);
        prev = temp.second;
        curr = prev->next;
        if (res == NULL)
            res = temp.first;
    } while (prev->next);
    return res;
}