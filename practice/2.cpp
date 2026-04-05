#include<iostream>
using namespace std;
char maximumOccurence(string s){
    int count[26]={0};
    for(int i=0; i<s.length(); i++){
        int ch=s[i]-'a';
        count[ch]++;
    }
    int maxi=-2;
    int ans=0;
    for(int i=0; i<26; i++){
        if(count[i]>maxi){
            maxi=count[i];
            ans=i;
        }
    }
    char answer='a'+ans;
    return answer;
}
int main() {
  
    string s;
    getline(cin,s);
   cout<<maximumOccurence(s);
}