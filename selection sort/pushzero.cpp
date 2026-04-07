#include<iostream>
using namespace std;
void pushzer(int array[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(array[j]==0){
                swap(array[j+1],array[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    pushzer(array,n);
    
}