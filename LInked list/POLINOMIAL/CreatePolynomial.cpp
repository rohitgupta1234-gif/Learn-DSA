#include<iostream>
using namespace std;
class Node {
    public:
    int coeff;
    int exp;
    Node *next;
    
    Node(int value, int power){
        coeff=value;
        exp=power;
        next=NULL;
    }
};
int main() {
    int n;
    cout<<"Enter how many node you want ? "<<endl;
    cin>>n;
    
    Node *head=NULL;
    Node *temp;
    for(int i=0; i<n; i++){
        int key;
        cout<<"Enter the value to make node : "<<endl;
        cin>>key;
        int pow;
        cout<<"Enter the power of coefficients : "<<endl;
        cin>>pow;
        if(head==NULL){
            head = new Node(key,pow);
            temp=head;
        }
        else {
            temp->next= new Node (key,pow);
            temp= temp->next;
        }
    }

    Node *ans = head;
    while(ans!=NULL){
        cout<<ans->coeff<<"x"<<"^"<<ans->exp;

        if(ans->next!=NULL){
            cout<<"+";
        }
       
        ans=ans->next;
    }
}