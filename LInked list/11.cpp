#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *Next;
    Node(int value){
        data=value;
        Next=NULL;
    }
};
int main() {
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Node *tail=NULL;
    Node *Head=NULL;

    for(int i=0; i<n; i++){
        if(Head==NULL){
        Head=new Node(arr[i]);
        tail=Head;
    }
    else {
      Node *temp=new Node(arr[i]);
      temp=temp->next;
      tail=temp;

        
      }
    }
    }
}