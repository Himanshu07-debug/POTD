long long multiplyTwoLists(Node *first, Node *second) {
    // code here
    int mod = 1e9 + 7;
    
    long long a = 0, b = 0;
    
    Node* curr = first;
    
    while(curr != NULL){
        a = ((a*10)%mod + (curr -> data))%mod;
        curr = curr -> next;
    }
    
    curr = second;
    
    while(curr != NULL){
        b = ((b*10)%mod + (curr -> data))%mod;
        curr = curr -> next;
    }
    
    long long ans = (a*b)%mod;

    return ans;        
    
}