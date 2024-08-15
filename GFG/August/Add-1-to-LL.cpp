Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* addOne(Node* head) {
    head=reverse(head);
    Node* curr=head;
    curr->data+=1;
    while(curr!=NULL){
        if(curr->data==10){
            if(curr->next!=NULL){
                curr->data%=10;
                curr->next->data+=1;
            }else{
                Node* newNode=new Node(1);
                curr->next=newNode;
            }
        }
        curr=curr->next;
    }
    return reverse(head);
}