#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hashtable[10][1];
    for(int i=0; i<n; i++){
        hashtable[arr[i]%10][0]=arr[i];
    }

    int key;
    cout<<"Enter the element which you want to search : ";
    cin>>key;
    
    bool found=false;
    for(int i=0; i<10; i++){
        if(hashtable[i][0]==key){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"Element is present in Hashtable ";
    }
    else {
        cout<<"Element is not present in Hashtable ";
    }
}