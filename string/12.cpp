#include<iostream>
using namespace std;
int main () {
    string s1; 
    getline(cin,s1);
    
    string s2;
    getline(cin,s2);

    int fors1[26]={0};
    int fors2[26]={0};

    for(int i=0; i<s1.length(); i++){
        int p=s1[i]-'a';
        fors1[p]++;
    }

    for(int i=0; i<s2.length(); i=i+(s1.length()-1)){
        int l=s2[i]-'a';
        fors2[l]++;
    }
    for(int i=0; i<s2.length(); i++){
        if(fors1==fors2){
            cout<<"True";
        }
        else {
            cout<<"False";
        }
    }

}