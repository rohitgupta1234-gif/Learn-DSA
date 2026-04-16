#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
int main() {
    //Dynamically Allocating memory in heap and returning the address
       Node *head  =new Node();

       //Next node 
       Node *node2 = new Node();
       head -> data = 10;
       node2 ->data =20;
       node2 ->next = NULL;
       head->next = node2;
       cout<<"Data = "<<head -> data<<endl <<"Next = "<<head ->next<<endl;
       cout<<"Data = "<<node2 -> data<<endl <<"Next = "<<node2 ->next<<endl;

   return 0;
}