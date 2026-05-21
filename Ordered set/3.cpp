#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of elements of s1 : ";
    cin>>n;

    
    vector<int>s1(n);
    for(int i=0; i<n; i++){
        cin>>s1[i];
    }

    int m;
    cout<<"Enter the number of elements of s2 : ";
    
    vector<int>s2(m);
    cout<<"Enter the number of elements of s2 : ";
    for(int i=0; i<m; i++){
        cin>>s2[i];
    }

    bool flag = false;
    
    for(int num : s2){
        if(s1.find(num)!=s1.end()){
             flag=true;
             break;
        }
    }

    


}