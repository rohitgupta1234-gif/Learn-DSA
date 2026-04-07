#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){

      cin>>array[i];
    }
   int st=0; 
   int e=n-1;
   int target;
   cin>>target;
   
   while(st<=e){
      int mid= st+ (e-st)/2 ;
     if(array[mid]==target){
        cout<<mid+1;
        break;
     }
     else if(array[mid]>target){
        e=mid-1;
     }
     else if(array[mid]<target){
        st = mid+1;
     }
     else{
        cout<<"element id not in this array ";
     }
   }

}