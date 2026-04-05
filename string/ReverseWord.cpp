//Reverse Word
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string s1;
    getline(cin,s1);

    reverse(s1.begin(),s1.end());
    
    string s;
    for(int i=0; i<s1.length(); i++){
        string word="";
        while(s1[i]!=' ' && i<s1.length()){
             word=word+s1[i];
             i++;
        }
        reverse(word.begin(),word.end());
        if(!word.empty()){
            s=s+" "+word;
        }
    }
    cout<<s.substr(1);




}