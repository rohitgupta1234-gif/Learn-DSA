#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    // bubble sort Optimise
    for(int i=0; i<n-1; i++){ // no of passes
        bool flag=true;

        for(int j=0; j<n-1-i; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                flag = false;
            }
        }
        if(flag==true){
            break;
        }

    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

}