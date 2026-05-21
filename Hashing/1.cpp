#include<iostream>
#include<vector>
using namespace std;
class Node{
    int value;
    Node *next;
    Node(int data){
        value=data;
        next=NULL;
    }
};
int main() {
    int n;
    cout<<"Enter the value of elements : ";
    cin>>n;

    
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cout<<"Enter the value of array : ";
        cin>>arr[i];
    }

    vector<int>hashing(10);

    for(int i=0; i<n; i++){
        
    }
    
}