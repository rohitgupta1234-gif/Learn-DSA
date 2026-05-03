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
    cout<<"Enter the no of Nodes : ";
    cin>>n;
    
    Node *head,*temp;
    head=temp=NULL;
    for(int i=0; i<n; i++){
       int key;
       cout<<"Enter the value of Node : ";
       cin>>key;
      if(head==NULL){
        head = new Node(key);
        temp=head;
      }
      else {
        temp->next=new Node(key);
        temp=temp->next;
      }
       
    }
    int index;
    cout<<"Which position do you want to delete : ";
    cin>>index;
     
    Node* del=head;
    Node* tail=NULL;

    if(index==1){
       head=head->next;
       delete del;
    }
    else if (index>n){
        cout<<"Invalid position ";
        return 0;
    }
    else {
        for(int i=1; i<index-1; i++){
            del=del->next;
        }
        tail=del->next;
        del->next=tail->next;
        delete tail;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}