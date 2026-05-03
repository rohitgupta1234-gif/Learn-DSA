#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data= value;
        next=NULL;
        prev=NULL;
    }
};
int main() {
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
      

    Node *temp, *head;
    temp=head=NULL;
    for(int i=0; i<n; i++){
         int key;
         cout<<"Enter the Elements : ";
         cin>>key;
        
         if(head==NULL){
            head=new Node (key);
            temp=head;
         }
         else {
            temp->next=new Node (key);
            temp->next->prev=temp;
            temp=temp->next;
         }
    }
    int index;
    cout<<"Enter which index you want to insert : ";
    cin>>index;
    
    int element;
    cout<<"Enter the Element which you want to insert? : ";
    cin>>element;
    Node *newnode = new Node(element);
    if(index==1){
         newnode->next=head;
         head->prev=newnode;
         head=newnode;
    }
    else {
        Node *pos=head;
        for(int i=1; i<index-1; i++){
           pos=pos->next;
        }
        //🤑🤑🤑🤑🫡🫡🙏🙏👍👍
        newnode->next=pos->next;
       if(pos->next!=NULL){  //👍👍👍👍🙏🙏🙏🙏
          pos->next->prev=newnode;
       }
        pos->next=newnode;
        newnode->prev=pos;
        
    }

    Node* output=head;
    while(output!=NULL){
        cout<<output->data<<"->";
        output=output->next;
    }
    cout<<"NULL"<<endl;

}