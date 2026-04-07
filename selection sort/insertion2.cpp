#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j>=0; j--){
            if(j>0 && array[j-1]>array[j] ){
                swap(array[j-1],array[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}