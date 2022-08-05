#include<iostream>
#include<math.h>
#include<vector>
#include<iterator>

using namespace std;

// Class Node
class Node{
    public:
        int data;
        Node *next;
    
    Node(){
        next = NULL;
    }
};

// Print LL
void printLL(Node *n){
    Node *temp = n;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


// Initialize the LL with 0-1-2-3-4
void initLL(Node *n){
    Node *temp = n;
    temp->data = 0;
    for(int i=1;i<=4;i++){
        Node *n = new Node();
        n->data = i;
        temp->next = n;
        temp = n;
    }
}

int main(){
    Node *head = new Node();

    initLL(head);
    printLL(head);


    return 0;
}