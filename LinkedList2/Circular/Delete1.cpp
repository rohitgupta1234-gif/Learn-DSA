#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main() {
    int n;
    cout<<"Enter the no of element : ";
    cin>>n;

   
    Node* temp=NULL,*head=NULL;

    for(int i=0; i<n; i++){
        int key;
        cout<<"Enter the Value of Node Element : ";
        cin>>key;
        if(head==NULL){
            head= new Node (key);
            temp=head;
        }
        else{
            temp->next=new Node(key);
            temp=temp->next;
        }
    }
    Node *tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=head;

    Node *del = head;
    int index;
    cout<<"Enter the which index you want to delete : ";
    cin>>index;

    if(index>n || index<=0){
        cout<<"Invalid position : ";
        return 0;
    }
    else if (index==1){
        Node *pos=head;
        while(pos->next!=head){
            pos=pos->next;
        }
        Node *output=head;
        pos->next=output->next;
        head=output->next;
        delete output;

    }
    else {
        Node *pos=head;
        for(int i=1; i<index-1; i++){
            pos=pos->next;
        }
        Node *output=pos->next;
        pos->next=output->next;
        delete output;
    }
    Node *print=head;
    do{
        cout<<print->data<<" ";
        print=print->next;
    }
    while(print!=head);
    cout<<"return back to head ";

    
}