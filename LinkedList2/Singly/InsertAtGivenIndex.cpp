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

   int index;
   cout<<"Enter which index you want : "<<endl;
   cin>>index;

   Node *newnode=head;

   for(int i=1; i<index-1; i++){
      newnode=newnode->next;
   }

   Node *insert=new Node(32);
   insert->next=newnode->next;  // see this point there is wrong:
   newnode->next=insert;
   

   Node *tail=head;
   cout<<"Your Node is : "<<endl;
   while(tail!=NULL){
      
      cout<<tail->data<<"->";
      tail= tail->next;
   }
   cout<<"NULL";
}