#include<iostream>
using namespace std;
class Node{
   public:
   int coeff;
   int exp;
   Node *next;
   Node(int value, int p){
      coeff=value;
      exp=p;
      next = NULL;
   }
   
   Node *addpoly(Node *head1, Node *head2 ){
           Node *result=NULL, *temp=NULL;
           
           while(head1!=NULL && head2!=NULL){
              Node* newnode;
              Node *result;
              if(head1->exp==head2->exp){
                  newnode = new Node (head1->coeff + head2->coeff,head1->exp);
                  head1=head1->next;

                  head2=head2->next;
              }
              else if(head1->exp > head2->exp){
                  head1=head1->next;
                  
              }
              else {
                 head2=head2->next;
              }

              if(result==NULL){
                 result = temp= newnode;
              }
              else {
                temp->next= newnode;
                temp= temp->next;
              }
              
           }
           
   }
};
int main () {
    int n;
    cout<<"Enter How Many NOde you Want ? ";
    cin>>n;
    cout<<endl;

    Node *temp1,*head1;
    temp1=head1=NULL;

    for(int i=0; i<n; i++){
      int key1;
      cout<<"enter the coefficients : ";
      cin>>key1;
      int power1;
      cout<<"enter the exponantial power : ";
      cin>>power1;
      if(head1==NULL){
        head1=new Node (key1,power1);
        temp1=head1;
      }
      else {
        temp1->next= new Node (key1,power1);
        temp1 = temp1->next;
      }
    }

     Node *temp2,*head2;
    temp2=head2=NULL;

    for(int i=0; i<n; i++){
      int key2;
      cout<<"enter the coefficients : ";
      cin>>key2;
      int power2;
      cout<<"enter the exponantial power : ";
      cin>>power2;
      if(head2==NULL){
        head2=new Node (key2,power2);
        temp2=head2;
      }
      else {
        temp2->next= new Node (key2,power2);
        temp2 = temp2->next;
      }
    }





    
}