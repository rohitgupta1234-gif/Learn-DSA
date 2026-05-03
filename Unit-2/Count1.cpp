#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"How many elements do you want to enter?  ";
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter Your array Element : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    int freq[maxi+1]={0};

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
     
    // Cummulative Frequency
    for(int i=1; i<=maxi; i++){
        freq[i]=freq[i]+freq[i-1];

    }

    int output[n];
    
    for(int i=n-1; i>=0; i--){
        int pos=0;
        pos = freq[arr[i]]-1;
        output[pos]=arr[i];
        freq[arr[i]]-1;
    }
    
    cout<<"Your Output is : ";
    for(int i=0; i<n; i++){
        cout<<output[i]<<"  ";
    }
    cout<<endl;

    return 0;

}