DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
    // code here
    priority_queue<int,vector<int>,greater<int>>pq; 
    
    DLLNode *head1= head;
    DLLNode *head2= head;
    
    while(head1){
        
        pq.push(head1->data);
        
        if(pq.size()==k+1){
            head2->data=pq.top();
            head2=head2->next;
            pq.pop();
        }
        
        head1=head1->next;
        
    }
    
    while(!pq.empty()){
        
        head2->data=pq.top();
        head2=head2->next;
        pq.pop();
        
    }
    
    return head;
    
}