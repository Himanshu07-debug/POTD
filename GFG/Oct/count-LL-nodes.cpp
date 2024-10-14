 int getCount(struct Node* head) {
    struct Node*temp=head;
    int i=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        i++;
    }
    return i;
}