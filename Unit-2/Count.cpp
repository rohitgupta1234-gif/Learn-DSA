#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxi= INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }

    int freq[maxi+1]={0};

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
 // Cummulative frequency
    for(int i=1 ; i<=maxi; i++){
        freq[i]=freq[i]+freq[i-1];
    }
    int output[n];
    for(int i=n-1; i>=0; i--){
        int position = freq[arr[i]]-1;

        output[position]=arr[i];
        freq[arr[i]]--;

    }

    for(int i=0; i<n; i++){
    cout << output[i] << " ";
}



} 