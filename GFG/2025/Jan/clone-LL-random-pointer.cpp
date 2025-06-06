Node *cloneLinkedList(Node *head)
{
    // Write your code here

    if (!head)
        return NULL;

    Node *curr = head;
    while (curr)
    {
        Node *newNode = new Node(curr->data);
        newNode->next = curr->next;
        curr->next = newNode;
        curr = newNode->next;
    }

    curr = head;
    while (curr)
    {
        if (curr->random)
            curr->next->random = curr->random->next;
        curr = curr->next->next;
    }

    Node *original = head, *copy = head->next, *temp = copy;
    while (original)
    {
        original->next = original->next->next;
        if (copy->next)
            copy->next = copy->next->next;

        original = original->next;
        copy = copy->next;
    }

    return temp;
}