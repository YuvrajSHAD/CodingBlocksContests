#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertAtHead(Node *&head,int d){
    Node * newNode = new Node(d);
    newNode -> next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int d){
    Node* newNode = new Node(d);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;

}

void insertAtPos(Node*&head,int d, int p){
    if(p==1){
        insertAtHead(head,d);
        return;
    }
    Node * newNode = new Node(d);
    Node *temp = head;
    while(p-1 > 1){
        temp = temp->next;
        p--;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deletionAtHead(Node *&head){
    if(head == NULL){
        return;
    }
    Node * temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node *&head){
    if(head == NULL){
        return;
    }
    if(head -> next == NULL){
        deletionAtHead(head);
        return;
    }
    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }delete temp->next;
    temp->next = NULL;
}
    

void print(Node *&head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;

    }
    cout << "NULL";
}

int main(){
    
    Node *head = NULL;
    insertAtHead(head,5);
    insertAtEnd(head,6);
    print(head);
return 0;
}