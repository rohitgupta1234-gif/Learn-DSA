#include<iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);

    string word="";
    int index=0;
    while(s[index]!=' ' && index<s.length()){
        word=word+s[index];
        index++;
    }
    
}