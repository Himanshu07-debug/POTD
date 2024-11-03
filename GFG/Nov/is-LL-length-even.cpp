bool isLengthEven(struct Node **head) {
    // Code here
    int cnt=0;
    Node* temp=*head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt%2==0;
}