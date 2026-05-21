#include<iostream>
#include<string>
#include<cstring>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of Elements of s1 ";
    cin>>n;
     set<char>s1;
     cout<<endl;
     cout<<"Enter the string of s1 :";
    for(int i=0; i<n; i++){
        char x;
        cin>>x;
       
        s1.insert(x);
    }
    
    int m;
    cout<<"Enter the number of elements in s2 ";
    cin>>m;
    cout<<endl;
    set<char>s2;
    cout<<"Enter the string s2 ";
    for(int i=0; i<m; i++){
        char y;
        cin>>y;
        s2.insert(y);
    }
    set<char>s3;
    for(char ch:s1){
        if(s2.count(ch)){
           s3.insert(ch);
        }
    }
    cout<<endl;
    cout<<"Your Output is : ";
    for(char val: s3){
        cout<<val;
    }
    cout<<endl;
    cout<<"No of Element common is : ";
    cout<<s3.size();




}
