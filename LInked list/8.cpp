#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
int main() {
    //Dynamically Allocating memory in heap and returning the address
       Node *head  =new Node();

       //Assigning values
       head -> data = 10;
       head ->next=NULL;

       cout<<"Data = "<<head -> data<<endl <<"Next = "<<head ->next<<endl;
   return 0;
}