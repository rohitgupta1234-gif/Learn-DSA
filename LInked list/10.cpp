// 3 node
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
int main() {
    //Dynamically Allocating memory in heap and returning the address
       Node *head  =new Node();
       head -> data = 10;
       head ->next=NULL;
       //Next node 
       Node *node2 = new Node();
       
       
       node2 ->data =20;
    //    node2 ->next = NULL;
       head->next = node2;
       cout<<"Data = "<<head -> data<<endl <<"Next = "<<head ->next<<endl;
       

       Node *Second = new Node();
       Second->data=40;
       Second->next=NULL;
       node2-> next = Second;
       cout<<"Data = "<<node2 -> data<<endl <<"Next= "<<node2->next <<endl;
        cout<<"Data = "<<Second -> data<<endl <<"Next = "<<Second ->next<<endl;


   return 0;
}