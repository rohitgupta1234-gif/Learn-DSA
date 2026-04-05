//find maximum element
#include<iostream>
using namespace std;
int peakelement(int  array[],int n){
    int s=0; 
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(array[mid]<array[mid+1]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main() {
    int array[]={0,2,1,0};
    cout<<"Highest element in array "<<peakelement(array,4);
}