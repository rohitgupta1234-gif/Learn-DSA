#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int value){
     data=value;
     next=NULL;
   }
};
int main() {
   int n;
   cout<<"Enter the no of Node : "<<endl;
   cin>>n;
   Node* head,*temp;
   head=temp=NULL;
   for(int i=0; i<n; i++){
     int key;
     cout<<"Enter the value of Node : "<<endl;
     cin>>key;

     if(head==NULL){
        head = new Node (key);
        temp=head;
     }
     else {
        temp->next=new Node (key);
        temp=temp->next;
     }
   }
   Node *last=head;
   while(last->next!=NULL){
      last=last->next;
   }

   Node* newnode= new Node (90);
   last->next=newnode;

   Node *tail=head;
   cout<<"Your Node is : "<<endl;
   while(tail!=NULL){
      
      cout<<tail->data<<"->";
      tail= tail->next;
   }
   cout<<"NULL";
}