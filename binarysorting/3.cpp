// First and last occurence of element
#include<iostream>
using namespace std;
int firstoccurence(int array[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(array[mid]==key){
        e=mid-1;
        ans=mid;
    }
    else if(array[mid]>key){
        e=mid-1;
    }
    else if(array[mid]<key){
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
}
int secondoccurence(int array[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(array[mid]==key){
        s=mid+1;
        ans=mid;
    }
    else if(array[mid]>key){
        e=mid-1;
    }
    else if(array[mid]<key){
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    int n=9;
    int array[]={2,3,4,5,5,7,7,7,8};
    cout<<"first index at "<<firstoccurence(array,n,7)<<endl;
    cout<<"second index at "<<secondoccurence(array,n,7);

}