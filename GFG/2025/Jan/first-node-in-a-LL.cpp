Node *findFirstNode(Node *head)
{
    // your code here

    unordered_set<Node *> st;

    Node *curr = head;

    while (curr != NULL)
    {

        if (st.count(curr))
            return curr;

        st.insert(curr);
        curr = curr->next;
    }

    return NULL;
}