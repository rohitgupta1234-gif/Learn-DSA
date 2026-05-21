#include<bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cout<<"enter the number of elements : ";
 cin>>n;

 vector<int>s1(n);
 for(int i=0; i<n; i++){
   cin>>s1[i];
   
}
   
 
int m;
cout<<"enter the  number of elements : set 2 : ";
cin>>m; 
vector<int>s2(m);

for(int i=0; i<m; i++){
    cin>>s2[i];
}

if(includes(s1.begin(),s1.end(),s2.begin(),s2.end())){
    cout<<"S1 IS SUBSET OF S2 ";
}else{
    cout<<"element is not present ";
}



}
