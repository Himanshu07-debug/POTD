vector<Node*> alternatingSplitList(struct Node* head) {

    vector<Node*>ans;

    Node* first=head;
    Node* second=head->next;

    ans.push_back(head);
    ans.push_back(head->next);

    while(first->next && second->next){

        first->next=second->next;
        first=second->next;
        second->next=first->next;
        second=first->next;

    }

    first->next=NULL;

    return ans;
    
}