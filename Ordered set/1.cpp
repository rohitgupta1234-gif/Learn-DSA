#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of Elements : ";
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int maxi = *max_element(v.begin(),v.end());
    int mini = *min_element(v.begin(),v.end());

    cout<<"Maximum Element is : "<<maxi<<endl<<"Minimum Element is : "<<mini;
    
    

}