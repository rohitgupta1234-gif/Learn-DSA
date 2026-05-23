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
   Node*temp;
   for(int i=0; i<n; i++){
    int key;
    cin>>key;
    if(head==NULL){
        head= new Node(key);
        temp=head;
    }
    else{
        temp->next=new Node(key);
        temp=temp->next;
    }
   }

   Node *tail=head;
   while(tail!=NULL){
    cout<<tail->data;
    if(tail->next!=NULL){
        cout<<"->";
    }
    tail=tail->next;
   }
   cout<<"->NULL";
}