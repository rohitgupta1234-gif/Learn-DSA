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
    cout<<"How many do you want  make ? "<<endl;
    cin>>n;
    
    Node *head=NULL;
    Node *temp=NULL;
    for(int i=0; i<n; i++){
        int key;
        cout<<"Enter the value of node : ";
        cin>>key;
        cout<<endl;
        if(head==NULL){
            head = new Node(key);
            temp=head;
        }
        else{
            temp->next=new Node(key);
            temp=temp->next;
        }
    }
    Node *tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=head;

    Node *output=head;
    cout<<"Your node is : ";
   do{
    cout<<output->data<<"->";
    output=output->next;
   }while(output !=head);
   cout<<"(back to head)";
    

    return 0;



    
}