Node* sortedMerge(Node* head1, Node* head2) {
    Node* temp1=head1;
    Node* temp2=head2;
    Node* dummy = new Node(-1);
    Node* head = dummy;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            dummy->next = temp1;
            temp1=temp1->next;
        }
        else
        {
            dummy->next = temp2;
            temp2=temp2->next;
        }
        dummy=dummy->next;
    }
    if(temp1!=NULL)
    {
        dummy->next=temp1;
    }
    if(temp2!=NULL)
    {
        dummy->next=temp2;
    }
    return head->next;
}
Node* mergeKLists(vector<Node*>& arr) {

    int n = arr.size();
    Node* head = arr[0];
    for(int i=1;i<n;i++)
    {
        head = sortedMerge(head,arr[i]);
    }
    return head;
}