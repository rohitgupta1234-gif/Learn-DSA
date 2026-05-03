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
    cout<<endl;
    Node *head, *temp;
    head=temp=NULL;

    for(int i=0; i<n; i++){
         int key;
         cout<<"Enter the value of Node : ";
         cin>>key;

         if(head==NULL){
            head = new Node(key);
            temp=head;
         }
         else {
            temp->next=new Node(key);
            temp=temp->next;
         }
    }
    cout<<endl;

    Node *tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=head;

    int index;
    cout<<"Which position do you want to insert ? ";
    cin>>index;
    cout<<endl;

    int element;
    cout<<"Which Element do you want to Insert ? ";
    cin>>element;
    cout<<endl;

    Node *com=head;
    Node *newnode=new Node (element);
    if(head==NULL){
        head = newnode;
        com=head->next;
    }
    else if(index==1){  //🙏🙏🙏🙏👍👍👍👍👍👍❤️❤️❤️❤️❤️💕💕
       
    Node *last=head;

    while(last->next!=head){
        last=last->next;
    }

    newnode->next=head;

    //last->next=newnode;
    last->next=newnode;
    head=newnode;
       
    
}
    else{
        Node *insert=head;
        for(int i=1; i<index-1; i++){
            insert=insert->next;
        }
        newnode->next=insert->next;
        insert->next=newnode;
    }


    Node *output=head;   //👍🙏🙏🙏🫡🫡🫡🤑🤑🤑
    do{
         cout<<output->data<<"->";
        output=output->next;
    }
    while(output!=head);
    cout<<"(Back to head)"<<endl;
    return 0;
}