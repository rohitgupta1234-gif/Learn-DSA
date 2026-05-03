#include<iostream>
using namespace std;
class Node{
    public:
    
        int data;
        Node *next;
        Node(int value){
            data=value;
            next = NULL;
        }
    }
;
int main() {
    Node *head,*temp;
    head=temp=NULL;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int key;
        cin>>key;
       if(head==NULL){
         head=new Node (key);
         temp=head;
       }
       else {
          temp->next= new Node(key);
          temp=temp->next;
       }
    }

}