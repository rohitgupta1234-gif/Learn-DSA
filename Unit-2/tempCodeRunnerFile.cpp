#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n;
    cout<<"enter the number of Elements : ";
    cin>>n;
    
    if(n==0){
        return 0;
    }

    vector<int>arr(n);
    cout<<"Enter the Elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxi=arr[0];
    for(int i=1; i<n; i++){
      if(arr[i]>maxi){
        maxi=arr[i];
      }
    }

   vector<int>freq(maxi+1,0);
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //Cummulative frequency
    for(int i=1; i<=maxi; i++){
        freq[i]=freq[i]+freq[i-1];
    }
    
    
    int output[n];
    for(int i=n-1; i>=0; i++){
        output[freq[arr[i]]-1]=arr[i];
        freq[arr[i]]--;
    }

    cout<<"Your Sorted  Element is : ";
    for(int i=0; i<n; i++){
        cout<<output[i]<<" ";
    }
    return 0;
}