#include<iostream>
using namespace std;

class Node {
    public:
           int data;
           Node* next;

Node (){
    this-> next = NULL;
}           
Node (int data){
    //cout<<"I am inside param constructor"<<endl;
    this-> data = data;
    this->next = NULL;
}  

};
void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
int getLengthofNode(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertatHead(Node* &head, int data){
    if (head == NULL){
        Node* newNode = new Node(data);
        head = newNode;

    }
    else{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    }
}

int main(){

    Node* First = new Node(10);
    Node* Second = new Node(20);
    Node* Third = new Node(30);
    Node* Fourth = new Node(40);
    Node* Fifth = new Node(50);

    First->next = Second;
    Second->next = Third;
    Third->next = Fourth;
    Fourth->next = Fifth;


    Node* head = First;
    cout<<"Printing linked list :"<<endl;
    printLL(head);

    //cout<<"Printing length of ll:"<<getLengthofNode(head)<<endl;
    insertatHead(head,500);
    printLL(head);

    return 0;
}