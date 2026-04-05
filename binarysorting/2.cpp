// Searching the element
#include<iostream>
using namespace std;
int sortingsearching(int array[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(array[mid]==key){
            return mid;
        }
        else if(key>array[mid]){
            s=mid+1;
        }
        else if(key<array[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main() {
    int n;
    
    int array[]={1,2,3,4,5};
    cout<<"key elements at index "<<sortingsearching(array,5,2);
}