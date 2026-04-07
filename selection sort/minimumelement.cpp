#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<min;
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
}