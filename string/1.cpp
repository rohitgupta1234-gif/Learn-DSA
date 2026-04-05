//check palindrome
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

bool checkPalindrome(string s){
  int st=0;
  int e=s.length()-1;

  while(st<e){
     if(!isalnum(s[st])){
        st++;
     }
     else if(!isalnum(s[e])){
        e--;
     }
     else{
        if(tolower(s[st])!=tolower(s[e])){
            return false;
        }
         st++;
     e--;
     }
    
  }
  return true;
}
int main(){
    string s;
    getline(cin,s);

    cout<<checkPalindrome(s);

}

