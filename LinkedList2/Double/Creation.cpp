#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
};
int main() {
    int n;
    cout<<"Enter the number of Element : ";
    cin>>n;
    cout<<endl;
    Node *temp, *head;
    
    temp=head=NULL;
    for(int i=0; i<n; i++){
        Node *found=NULL;
        int key;
        cout<<"Enter the Elements : ";
        cin>>key;
        if(head==NULL){
            head=new Node (key);
            temp=head;
        }
        else{
            temp->next=new Node(key);
           temp->next->prev=temp; //👍🙏🙏🫡🫡🤑🤑💕💕
           temp=temp->next;
        }

    }
    Node *tail =head;
    while(tail!=NULL){
        cout<<tail->data<<"->";
        tail=tail->next;
    }
    cout<<"NULL"<<endl;



}