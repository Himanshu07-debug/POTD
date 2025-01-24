bool detectLoop(Node *head)
{
    // your code here
    Node *slow = head;
    if (!head || !head->next)
        return false;
    Node *fast = head->next->next;
    while (fast && fast->next)
    {
        if (slow == fast)
            return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}