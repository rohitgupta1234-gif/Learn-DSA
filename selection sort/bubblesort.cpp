#include<iostream>
using namespace std;
void bubblesort(int array[],int n){
    for(int i=0; i<=n-1; i++){
        bool found=true;
        for(int j=0; j<=n-i-2; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                found=false;
            }
            
        }
        if(found==true){
                break;
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
   bubblesort(array,n);
}