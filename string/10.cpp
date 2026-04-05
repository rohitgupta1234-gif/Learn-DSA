#include<iostream>
using namespace std;
string removesomepartfromstring(string &s , string part){
    int removepart=s.find(part);
    while(removepart>=0){
        string k=s.erase(removepart,part.length());
        removepart=s.find(part);
    }
    return s;
}

int main(){
   string s;
   getline(cin,s);
   string part;
   getline(cin,part);
   
   cout<<removesomepartfromstring(s,part);

}