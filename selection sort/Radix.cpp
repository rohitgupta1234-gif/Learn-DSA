#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    vector<int>freq(10,0);
    for(int i=0; i<n; i++){
        int digit= array[i]%10;
        freq[digit]=freq[digit]+1;
        
    }
    for(int i=1; i<10; i++){
        freq[i]=freq[i]+freq[i-1];
    }

    vector<int>ans(n);
    for(int i=n-1; i>=0; i--){
       int digit=array[i]%10;
       ans[freq[digit]-1]=array[i];
       freq[digit]=freq[digit]-1;
       
    }

    //Second pass
    vector<int>freq1(10,0);
    for(int i=0; i<n; i++){
       int digit=(ans[i]/10)%10;
       freq1[digit]=freq1[digit]+1;
    }
    
    for(int i=1; i<10; i++){
        freq1[i]=freq1[i]+freq1[i-1];
    }

    vector<int>ans1(n);
    for(int i=n-1; i>=0; i--){
        int digits=(ans[i]/10)%10;
        ans1[freq1[digits]-1]=ans[i];
        freq1[digits]--;
    }

    //Third pass
    vector<int>freq2(10,0);
    for(int i=0; i<n; i++){
       int digit = (ans1[i]/100)%10;
       freq2[digit]=freq2[digit]+1;
    }
    
    for(int i=1; i<10; i++){
        freq2[i]=freq2[i]+freq2[i-1];
    }

    vector<int>ans2(n);
    for(int i=n-1; i>=0; i--){
     int digit = (ans1[i]/100)%10;
        ans2[freq2[digit]-1]=ans1[i];
        freq2[digit]--;
    }

    for(int i=0; i<n; i++){
        cout<<ans2[i]<<" ";
    }


}