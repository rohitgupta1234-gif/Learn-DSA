#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main () {
   int n;
   cin>>n;
   vector<int>array(n);
   for(int i=0; i<n; i++){
      cin>>array[i];
   }
   for(int i=0; i<n-1; i++){
      int min = INT_MAX;
      int index=-5;
      for(int j=i; j<n; j++){
           if(array[j]<min){
               min=array[j];
               index=j;
           }
      } 
      swap(array[i],array[index]);
   }
   for(int i=0; i<n; i++){
      cout<<array[i]<<" ";
   }
}