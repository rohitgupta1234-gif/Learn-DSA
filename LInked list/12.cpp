#include<iostream>
using namespace std;
class Abhishek{
    public:
    int data;
    Abhishek *next;
    Abhishek(int value){
        data=value;
        next = NULL;
    }
};
int main () {
    int n; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Abhishek *head=NULL;
    Abhishek *tail = NULL;

    for(int i=0; i<n; i++){
        if(head==NULL){
            head= new Abhishek(arr[i]);
            tail = head;
        }
        else {
            tail = new Abhishek(arr[i]);
            tail = tail->next ;

        }
    }

    
}