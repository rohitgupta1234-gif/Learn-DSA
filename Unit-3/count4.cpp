#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter the  no of Elements : ";
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cout<<"Enter the the array elements : ";
        cin>>arr[i];
    }
    
    int maxi= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }

    vector<int>freq(maxi+1,0);
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //Cummulative Frequency
    for(int i=1; i<maxi+1; i++){
        freq[i]=freq[i]+freq[i-1];
    }

    vector<int>ans(n);
    for(int i=n-1; i>=0; i--){
        int digit=freq[arr[i]]-1;
        ans[digit]=arr[i];
        freq[arr[i]]--;
    }

    cout<<"YOUR SORTED ARRAY IS : ";
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

}