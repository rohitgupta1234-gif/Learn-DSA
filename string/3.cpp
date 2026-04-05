#include<iostream>
using namespace std;
bool checkpalindrome(string s,int n){
    int st=0;
    int e=n-1;
    bool found=true;
    while(st<e){
        if(!isalnum(s[st])){
            st++;
        }
        else if(!isalnum(s[e])){
            e--;
        }
        else if(tolower(s[st])!=tolower(s[e])){
            return false;
           
        }
        else {
            st++;
            e--;
        }
    }
    return true;



}
int main(){
 string s;
 getline(cin,s);
 int n=s.length();
   
 if(checkpalindrome(s,n)){
    cout<<"Palindrome";
 }
 else{
    cout<<"NOt Palindrome";
 }
 

}