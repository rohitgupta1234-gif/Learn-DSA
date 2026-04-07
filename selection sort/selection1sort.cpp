#include<iostream>
#include<climits>
using namespace std;
void sortigarray(int array[],int n){
    for(int i=0; i<n-1; i++){
        int  min=INT_MAX;
        int minindex=-2;
        for(int j=i; j<n; j++){
             if(array[j]<min){
                min = array[j];
               minindex=j;
             }
            //  swap(array[i],array[j]);
        }
         swap(array[i],array[minindex]);
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    sortigarray(array, n);
}