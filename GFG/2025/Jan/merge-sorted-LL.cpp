Node *sortedMerge(Node *head1, Node *head2)
{
    // code here
    Node *dummy = new Node(-1);
    Node *dc = dummy;
    Node *p1 = head1;
    Node *p2 = head2;
    while (p1 && p2)
    {
        if (p1->data <= p2->data)
        {
            dummy->next = p1;
            dummy = dummy->next;
            p1 = p1->next;
        }
        else
        {
            dummy->next = p2;
            dummy = dummy->next;
            p2 = p2->next;
        }
    }
    if (p1)
        dummy->next = p1;
    if (p2)
        dummy->next = p2;
    return dc->next;
}