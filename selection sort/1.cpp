#include<iostream>
using namespace std;
char maxoccurence(string &s){
    int alphabet[26]={0};
    int ans=0;

    for(int i=0; i<s.length(); i++){
          int index= s[i]-'a';
          alphabet[index]++;
          ans=i;

    }
    return ans+'a';
    
}
int main(){
   string s;
   getline(cin,s);
   
   cout<<maxoccurence(s);

}