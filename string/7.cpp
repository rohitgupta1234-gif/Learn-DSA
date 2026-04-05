#include<iostream>
#include<algorithm>
using namespace std;

void reversetheword(string &s){
    int st=0;
    int e=s.length()-1;
    while(st<e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    int start=0;
    for(int i=0; i<s.length(); i++){
        if(i==s.length() || s[i]=" "){
            reverse(s.begin()+start, s.end())
        }
    }
}
int main(){
 string s;
 getline(cin,s);

   reversetheword(s);
 
 
  

}