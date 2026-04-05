// Pivot Element 
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
    int mid=st+(e-st)/2;
    while(st<=e){
      mid=st+(e-st)/2;
      if(array[mid]>=array[0]){
        st=mid+1;
      }
      else {
        e=mid;
      }
    }
    cout<<st;
}