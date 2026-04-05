// Reverse words
#include<iostream>
#include<algorithm>
using namespace std;
void reversewords(string &s){

    reverse(s.begin(),s.end());

    int start=0;
    for(int i=0; i<=s.length(); i++){
        if(i==s.length() || s[i]==' '){
           reverse(s.begin()+start, s.begin()+i);
           start=i+1;
        }
    }
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
}
int main(){
  
    string s;
    getline(cin,s);

    reversewords(s);

}