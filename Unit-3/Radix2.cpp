#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of Elements : ";
    cin>>n;
    
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cout<<"Your element is : ";
        cin>>arr[i];
    }
    int maxi=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }

    
    for(int pos=1; maxi/pos>0; pos=pos*10){
       
        vector<int>freq(10,0);
       for(int i=0; i<n; i++){
        int digit= (arr[i]/pos)%10;
        freq[digit]++;
       }
       
       //Cummulative Frequency
       for(int i=1; i<10; i++){
         freq[i]=freq[i]+freq[i-1];
       }
       
       vector<int>ans(n);
       for(int i=n-1; i>=0; i--){
        int digit= freq[(arr[i]/pos)%10]-1;
          ans[digit]=arr[i];
          digit--;

          for(int i=0; i<n; i++){
            arr[i] = ans[i];
        }
       }
    }
}