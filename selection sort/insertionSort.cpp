#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>array(n);
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
       int j=i+1;
       while(array[j]<array[j-1] && j>=1){
        swap(array[j],array[j-1]);
        j--;
       }
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }


    
}