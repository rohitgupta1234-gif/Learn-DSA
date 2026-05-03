#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next = NULL;
    }
};
int main() {
    int n;
    cout<<"How many node do you want to make ? "<<endl;
    cin>>n;
    
    Node *head, *temp;
    head=temp=NULL;
   for(int i=0; i<n; i++){
    int key;
    cout<<"enter the node value : "<<endl;
    cin>>key;
     if(head==NULL){
        head= new Node (key);
        temp=head;
     }
    else {
        temp->next = new Node (key);
        temp = temp->next;
    }
   }
   cout<<"Print the value of Node : "<<endl;
   Node* tail = head;
   while(tail!=NULL){
      cout<<tail->data<<"  " ;
      tail= tail->next;
   }
   cout<<endl;

   int value;
   cout<<"enter the value which you want to delete : "<<endl;
   cin>>value;

   Node *del = head;
   while(del->data==value){
       del->next=del->next->next;
       
   }



}