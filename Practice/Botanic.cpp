// Botanic means Peak element
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int st=1; 
    int e =n-2;
    int mid=st+(e-st)/2;
    while(st<=e){
        mid = st + (e-st)/2;
        
        if(array[0]>array[1]){
              cout<<"element at index "<<0<<"  and element is "<<array[0];
              break;
        }
        if(n == 1) {
            break;
        }
        if(array[n-1]>array[n-2]){
             cout<<"element at index "<<n-1<<"  and element is "<<array[n-1];
             break;
        }
        if(array[mid]>array[mid+1] && array[mid]>array[mid-1]){
            cout<<"element at index "<<mid<<"  and element is "<<array[mid];
            break;
        
        }
        else if (array[mid]>array[mid+1]){
            e=mid-1;
        }
        else {
            st = mid+1;
        }
    }
    
}