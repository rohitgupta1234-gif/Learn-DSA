#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node* prev;
    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};
int main(){
    int n;
    cout<<"Enter the number of Elements : ";
    cin>>n;
    
    Node* head=NULL;
    Node* temp=NULL;
    cout<<"Enter the Elements of Node : ";
    for(int i=0; i<n; i++){
        int key;
        cin>>key;
        if(head==NULL){
            head=new Node(key);
            temp=head;
        }
        else{
            temp->next=new Node(key);
            temp->next->prev=temp;
            temp=temp->next;
        }  
    }

    Node *take=head;
    while(take!=NULL){
        cout<<take->data<<"->";
        take=take->next;
    }
    cout<<"NULL";






}