#include<iostream>
using namespace std;
void checkpalindrome(string s){
    int st=0; 
    int e=s.length()-1;
    bool found=true;
    while(st<=e){
        if(s[st]!=s[e]){
           found=false;
           break;
        }
        else {
            st++;
            e--;
        }
        
    }
   if(found){
    cout<<"It is  a found";
   }
   else {
    cout<<"it's not a palindrome ";
   }
}
int main() {
    string s;
    getline(cin,s);
    checkpalindrome(s);
}