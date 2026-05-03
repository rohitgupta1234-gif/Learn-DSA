#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next = NULL;
    }
};
int main() {
    Node *head= new Node(24);
    Node *first = new Node(10);
    Node *second = new Node(30);
    Node *third= new Node(40);

    head->next=first;
    first->next=second;
    second->next=third;

    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }

}