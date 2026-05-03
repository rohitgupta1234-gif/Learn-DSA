#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next=NULL;
    }
};
int main() {
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    cout<<endl;
    Node *head, *temp;
    head=temp= NULL;

    for(int i=0; i<n; i++){
        int key;
        cout<<"Enter the value of node : ";
        cin>>key;
        cout<<endl;
        
        if(head==NULL){
            head = new Node(key);
            temp=head;
        }
        else {
            temp->next=new Node(key);
            temp= temp->next;
        }
    }
    Node *last=head;
    while(last->next!=NULL){
       last=last->next;
    }
    

    Node *end=new Node(25);
    
    

    last->next=end;
    end->next=head;

      Node *output=head;   //👍🙏🙏🙏🫡🫡🫡🤑🤑🤑
    do{
         cout<<output->data<<"->";
        output=output->next;
    }
    while(output!=head);
    cout<<"(Back to head)"<<endl;

    
}