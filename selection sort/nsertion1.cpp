#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int j;
   for(int i=1; i<n; i++){
     int temp=array[i];
     for( j=i-1; j>=0 && array[j]>temp; j--){
        array[j+1]=array[i];
     }
     array[j+1]=temp;
   }
}