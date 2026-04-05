#include<iostream>
using namespace std;
int firstoccurence(int array[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(array[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else if (array[mid]<key){
           s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int secondoccurence(int array[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(array[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else if (array[mid]<key){
           s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main () {
    int even[10]={1,2,2,2,2,3,4,5,6,7};
    cout<<"first occurence at index "<<firstoccurence(even,10,2)<<endl;
    cout<<"second occurence at index "<<secondoccurence(even,10,2)<<endl;

    //total no of occurence
    int total=secondoccurence(even,10,2)-firstoccurence(even,10,2)+1;
    cout<<total;
    

}