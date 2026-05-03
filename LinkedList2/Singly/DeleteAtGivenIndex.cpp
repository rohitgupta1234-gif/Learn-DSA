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
   Node *del=head;
   int index;
   cout<<"Enter the index which you want to delete at index : "<<endl;
   cin>>index;
  
   //🫡🫡🫡🫡🤑🤑🤑🤑🔑🔑🔑🔑🙏🏻🙏🏻🙏🏻🙏🏻🙏🏻👍👍👍👍👍👍🙏🙏🙏🙏
   if(head==NULL){
    cout<<"List is Empty "<<endl;
   }
   else if(index == 0){

    Node *temp = head;

    head = head->next;

    delete temp;
}
   else{
       for(int i=1; i<index-1; i++){
       del=del->next;
   }
     Node *after=del->next;
   del->next=after->next;
   delete after;
   }
 
   
   


   Node *tail=head;
   cout<<"Your Node is : "<<endl;
   while(tail!=NULL){
      
      cout<<tail->data<<"->";
      tail= tail->next;
   }
   cout<<"NULL";
}