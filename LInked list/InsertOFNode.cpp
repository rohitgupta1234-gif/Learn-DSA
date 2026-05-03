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
  cin>>n;
  int key;
  Node *head,*temp;
  head=temp=NULL;
  for(int i=0; i<n; i++){
     cout<<"Enter data: "<<endl;
     cin>>key;

     Node *newnode= new Node(key);
     if(head==NULL){
        head=newnode;
        temp=head;
     }
     else {
        temp->next = newnode;
        temp=newnode;
     }
  }
  cout<<" YOUR OUTPUT IS -- ";
  Node *current=head;
  while(current!=NULL){
    cout<<current->data<<"->";
    current=current->next;
}
cout<<"NULL"<<endl;
   return 0;
}