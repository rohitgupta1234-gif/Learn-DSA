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
    cout<<"Please enter the input to make a node : "<<endl;
    cin>>n;
    int key;
    Node *head,*temp;
    head=temp=NULL;
    for(int i=0; i<n; i++){
        
        cin>>key;
        Node *newnode= new Node(key);
        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else {
            temp->next=newnode;
            temp= newnode;
        }
    }
    int pos;
    cout<<"enter the position where you want to insert "<<endl;
    cin>>pos;
    int x;
    
    cout<<"enter that element which you want to insert "<<endl;
    cin>>x;
    Node *tail=head;
    Node *naya=new Node (x);
    if(pos==1){
        naya->next=head;
        head=naya;
    }
    else {
        for(int i=1; i<pos-1; i++){
           tail=tail->next;
        }
        naya->next = tail->next;
        tail->next=naya;
    }
    Node *print=head;
    cout<<"after inserting the element ";
    while(print!=NULL){
       cout<<print->data<<"->";
       print= print->next;
    }
    cout<<"NULL";


}