#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no of Elements : ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the no of elements : ";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
     int maxi=arr[0];
    //For the maximum the Element 
    for(int i=0; i<n; i++){
       if(arr[i]>maxi){
        maxi=arr[i];
       }
    }

    for(int pos=1; maxi/pos>0; pos=pos*10){
       
        vector<int>freq(10);
        vector<int>ans(n);
        for(int i=0; i<n; i++){
           int digit = (arr[i]/pos)%10;
           ans[freq[digit]-1]=arr[i];
           freq[digit]--;
        }
        for(int i=1; i<10; i++){
            freq[i]=freq[i]+freq[i-1];
        }

        
        for(int i=n-1; i>=0; i--){
            ans[freq[arr[i]]-1]=arr[i];
            freq[arr[i]]--;
        }

        for(int i=0; i<n; i++){
            arr[i]=ans[i];
        }

    }
    cout<<"YOUR OUTPUT ARRAY IS : ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }


}