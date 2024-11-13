 int intersectPoint(Node* head1, Node* head2) {
    // Your Code Here
    if (head1==NULL && head2==NULL){
        return -1;
    }
    Node* A=head1;
    Node* B=head2;
    while(A!=B){
        if(A==NULL){
            A=head2;
        }
        else{
            A=A->next;
        }
        if(B==NULL){
            B=head1;
        }
        else{
            B=B->next;
        }
    }
    return A->data;
}