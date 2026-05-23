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
    cout<<"Enter the number of Elements : ";
    cin>>n;
    
    Node *head=NULL;
    Node *temp=NULL;
    for(int i=0; i<n; i++){
        int key;
        cin>>key;
       if(head==NULL){
        head=new Node(key);
        temp=head;
       }
       else{
          temp->next=new Node(key);
          temp=temp->next;
       }
    }
    int pos;
    cout<<"Enter the Position to the delete : ";
    cin>>pos;
    // int insert;
    // cout<<"Enter the Element to the insert : ";
    // cin>>insert;
     Node *take=head;
    if(pos==1){
        head=take->next;
        delete take;
    }
    else{
        for(int i=1; i<pos-1; i++){
            take=take->next;
        }
        Node* del=take->next;
        take->next=del->next;
        delete del;
    }

    Node *ans=head;
    while(ans!=NULL){
        cout<<ans->data<<"->";
        ans=ans->next;
        
    }
    cout<<"NULL";

    


}