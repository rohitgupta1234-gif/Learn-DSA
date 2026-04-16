#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void Countsort(int array[],int n){
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        if(array[i]>maxi){
            maxi=array[i];
        }
    }
    
    vector<int>freq(maxi+1,0);
    for(int i=0; i<n; i++){
        freq[array[i]]=freq[array[i]]+1;
    }
    
    for(int i=1; i<=maxi; i++){
        freq[i]=freq[i]+freq[i-1];
    }

    
    vector<int>ans(n);
    for(int i=n-1; i>=0; i--){
        ans[freq[array[i]]-1]=array[i];

    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}
int main() {
    int n; 
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    Countsort(array,n);
}