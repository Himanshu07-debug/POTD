 bool isPalindrome(Node *head) {
    // Your code here
    Node* prev = NULL;
    Node* curr = head;
    Node* fast = head;
    Node* temp;
    
    while(fast->next && fast->next->next)
    {
        fast = fast->next->next;
        temp = curr;
        curr = curr->next;
        temp ->next = prev;
        prev = temp;
    }
    if(!fast->next)
    {
        curr = curr->next;
    }
    else
    {
        temp = curr;
        curr = curr->next;
        temp->next = prev;
        prev = temp;
    }
    while(curr)
    {
        if(curr->data != prev->data)
            return false;
        curr = curr->next;
        prev = prev->next;
    }
    return true;
    
}