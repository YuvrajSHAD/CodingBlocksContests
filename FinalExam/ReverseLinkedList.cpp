#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int d){
    Node *newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}

Node* reverseList(Node *head){
    
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
void print(Node *head){
    Node*temp = head;
    while(temp!=NULL){
        cout <<temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}


int main(){
    
    Node *head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    print(head);
    reverseList(head);


return 0;
}