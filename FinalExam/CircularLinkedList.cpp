#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;

    Node(int val){
        this -> data = val;
        this ->next = NULL;
    }
};

void insertAtHead(Node *&head,int val){

    Node *n = new Node(val);

    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    Node *temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next =n;
    n->next = head;
    head = n;
}

void insertAtTail(Node *&head,int val){

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }

    Node *n = new Node(val);
    Node *temp = head;

    while(temp->next != head){
        temp = temp->next;

    }
    temp->next = n;
    n->next=head;
}

// DELETE AT HEAD
void deleteAtHead(Node* head){
    Node * temp = head;
    while(temp->next!= head){
        temp = temp->next;
    }
    Node *toDel = head;
    temp->next = head->next;
    head = head->next;

    delete toDel;
}

// DELETION OF NODE
void deletion(Node* &head,int pos){

    if(pos ==1){
        deleteAtHead(head);
        return;
    }

    Node *temp = head;

    while(pos-1 > 1){
        temp =temp -> next;
        pos--;
    }
    Node *toDel = temp->next;
    temp -> next = temp->next->next;
    delete toDel;
}

void display(Node *head){

    Node * temp = head;
    do{
        cout << temp->data << "->";
        temp = temp->next;
    }
    while(temp!=head); 
    cout << head->data;
}
int main(){
    
    Node *head = NULL;
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    deletion(head,2);
    cout << endl;
    display(head);

return 0;
}