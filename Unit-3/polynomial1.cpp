#include<iostream>
using namespace std;
class Node{
    public:
    int coefficient;
    int exponent;
    Node *next;
    Node(int c, int e){
        coefficient=c;
        exponent=e;
        next=NULL;
    }
};
int main() {
    int n;
    cout<<"Enter the number of element in Polynomial : ";
    cin>>n;
    Node *head=NULL,*temp=NULL;
    for(int i=0; i<n; i++){
        int coeff,pow;
        cout<<"for"<<i+1<<"Enter the coeff  : ";
        cin>>coeff;

        cout<<"Enter the Power : ";
        cin>>pow;


        
        Node* newnode= new Node(coeff,pow);
        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
    }

    Node* tail=head;
    while(tail!=NULL){
        cout<<tail->coefficient<<"X"<<"^"<<tail->exponent;
        if(tail->next!=NULL){
            cout<<"+";
        }
        tail=tail->next;
    }
    return 0;

}