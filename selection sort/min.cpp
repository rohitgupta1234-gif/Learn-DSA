//use in selection sort
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int  main () {
    int n;
    cin>>n; 
    vector<int>array(n);
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int index=-1;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(array[i]<min){
            min=array[i];
            index=i;
        }
    }
    cout<<min<<" "<<index;
    

}