#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data= value;
        next = NULL;
    }
};
int main () {
    int n;
    cin>>n;
    Node *head,*tail;
    head=tail=NULL;
    for(int i=0; i<n; i++){
        int key;
        cout<<"Enter the value : "<<endl;
        cin>>key;
       if(head==NULL){
          head=new Node(key);
          tail=head;
       }
       else {
          tail->next=new Node(key);
          tail = tail->next;
       }
    }
    tail->next=head;
    
    cout<<"YOUR OUTPUT IS :" <<endl;
    Node *temp=head;
    do {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);

    
}