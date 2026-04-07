#include<iostream>
using namespace std;
int main () {
    int n;
    int array[n];
    for(int i=0; i<n-1; i=i+2){
       for(int j=i+1; j<i+2; j++){
          if(array[i]>array[j]){
            swap(array[i],array[j]);
          }
       }
    }
}