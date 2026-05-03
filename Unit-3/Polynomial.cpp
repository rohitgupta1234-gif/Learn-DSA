#include<iostream>
using namespace std;
class Node{
   public:
   int exponent;
   int coefficient;
   Node *next;
   Node(  int coeff,int exp){
      
      exponent=exp;
      coefficient= coeff;
      next=NULL;
      
   }
};
int main() {
    int n;
    cout<<"How many Exponent you want to make : ";
    cin>>n;

    Node *head=NULL,*temp=NULL;

    for(int i=0; i<n; i++){
        int coeff,pow;
     cout<<"Enter coefficent and power of term "<<i+1<<" ";
     cin>>coeff>>pow;
     
     Node* newnode=new Node(coeff,pow);

     if(head==NULL){
        head=newnode;
        temp=head;
     }
     else {
        temp->next=newnode;
        temp=temp->next;
     }
    }

    //Display polynomial
    cout<<"Polynomial is : ";
    Node *tail=head;
    while(tail!=NULL){
        cout<<tail->coefficient<<"X"<<"^"<<tail->exponent;
        if(tail->next!=NULL){
            cout<<"+";
        }
        tail=tail->next;
    }
    cout<<endl;
    return 0;
}