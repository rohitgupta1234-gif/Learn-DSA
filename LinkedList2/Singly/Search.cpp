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

//    Node *search=head;
//    cout<<"Your Node is : "<<endl;
//    while(tail!=NULL){
      
//       cout<<tail->data<<"->";
//       tail= tail->next;
//    }
//    cout<<"NULL";
   Node*tail=head;
  int search;
  cout<<"Enter the element which you want : "<<endl;
  cin>>search;
  bool found= false;
  int index=0;

  while(tail!=NULL){
    if(tail->data==search){
        found=true;
        cout<<"Element found at index at : "<<index<<endl;
        break;
    }
    index++;
    tail=tail->next;
  }
  if(!found){
    cout<<"Element is not present "<<endl;
  }

}