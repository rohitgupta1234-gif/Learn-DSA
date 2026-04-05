#include<iostream>
#include<climits>
using namespace std;
int main () {
    string s;
    getline(cin,s);

     int array[26]={0};
     int maxi = INT_MIN;


     for(int i=0; i<s.length(); i++){
        int index=s[i]-'a';
        array[index]++;
     }
     int ans=0;
     for(int i=0; i<26; i++){
        if(array[i]>maxi){
            maxi=array[i];
            ans=i;
        }
     }
     cout<<ans<<endl;
     char ch='a'+ans;
     cout<<ch;
     

}