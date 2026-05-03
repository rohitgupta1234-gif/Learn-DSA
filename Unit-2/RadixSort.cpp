#include<iostream>
#include<vector>
using namespace std;
void countSort(vector<int> &v, int pos){
    int n= v.size();

    //create freq array
    vector<int>freq(10,0);
    for(int i=0; i<n; i++){
        freq[(v[i]/pos)%10]++;
    }

    //cummulative freq
    for(int i=1; i<10; i++){
        freq[i]=freq[i]+freq[i-1];
    }

    //ans array
    vector<int>ans(n);
    for(int i=n-1; i>=0; i--){
        ans[freq[v[i]]-1]=ans[i];
        freq[v[i]]--;
    }

    for(int i=0; i<n; i++){
        v[i]=ans[i];
    }
}
void radixsort(vector<int> &v){
    int maxi=v[0];
    for(int i=0; i<v.size(); i++){
        if(v[i]>maxi){
            maxi=v[i];
        }
    }

    for(int pos=1; maxi/pos; pos=pos*10){
        countSort(v,pos);
    }
}
int main() {
    int n;
    cout<<"Enter the no of Elements : ";
    cin>>n;
    if(n==0){
        return 0;
    }
    int arr[n];
    
    for(int i=0; i<n; i++){
        cout<<"Enter the Elements : ";
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        
    }
}