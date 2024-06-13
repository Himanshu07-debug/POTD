#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

struct node{

    int data;
    node* next;

    node(int x){
        data = x;
        next = NULL;
    }

};

// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

node* doubleIt(node* head) {

    node* prev = NULL;
    node* newHead = head;

    if(head -> data >= 5){
        prev = new node(1);
        prev -> next = head;
        newHead = prev;
    }

    head -> data = (2*head->data)%10;

    prev = head;
    head = head -> next;

    while(head != NULL){

        if(head -> data >= 5){
            prev -> data += 1;
        }

        head -> data = (2*head->data)%10;

        prev = head;

        head = head -> next;

    }

    return newHead;
        
}