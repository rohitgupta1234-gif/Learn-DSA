#include<iostream>
#include<vector>
using namespace std;
int main ( ) {
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    
    vector<int>arr(n);
    cout<<"Enter the Elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxi=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    
    vector<int>freq(maxi+1,0);

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //Cummulative frequency
    for(int i=1; i<maxi+1; i++){
        freq[i]=freq[i]+freq[i-1];
    }

    vector<int>ans(n);
    for(int i=n-1; i>=0; i++){
        int digit= freq[arr[i]]-1;
        ans[digit]=arr[i];
        freq[arr[i]]--;
    }
    cout<<"YOUR SORTED ARRAY IS : ";
    for(int i=0; i<n; i++){
        
        cout<<ans[i]<<" ";
    }

}