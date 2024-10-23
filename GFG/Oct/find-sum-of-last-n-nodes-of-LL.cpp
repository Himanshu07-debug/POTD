int sumOfLastN_Nodes(struct Node* head, int n) {
    // Code here
    
    Node* first = head;
    
    int cnt = 0;
    int tot = 0;
    
    while(first != NULL && cnt < n){
        tot += first -> data;
        first = first -> next;
        cnt++;
    }
    
    if(first == NULL && cnt < n) return 0;
    
    Node* second = head;
    int sum = 0;
    
    while(first != NULL){
        sum += second -> data;
        tot += first -> data;
        first = first -> next;
        second = second -> next;
    }
    
    return tot - sum;
    
}