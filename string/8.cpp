//Replace spaces by @40
#include<iostream>
using namespace std;
string replaceacharacter(string &s){
    string p="";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            p.push_back('@');
            p.push_back('4');
            p.push_back('0');
        }
        else{
            p.push_back(s[i]);
        }
    }
    return p;
}
int main(){
   string s;
   getline(cin,s);
    
   cout<<replaceacharacter(s);
}