//Find Pivot in array
//Pivot means deliberately change 
#include<iostream>
using namespace std;
int getpivot(int array[], int n){
    int s=0; 
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(array[mid]>=array[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
  int array[7]={2,3,4,5,6,0,1};
  cout<< "pivot at index--> " <<getpivot(array,7);
}