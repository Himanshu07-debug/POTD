void deleteAlt(struct Node *head) {
    // Code here
    Node* curr = head;
    
    while(curr != NULL && curr -> next != NULL){
        
        curr -> next = curr -> next -> next;
        
        curr = curr -> next;
        
    }
}