#include<iostream>
using namespace std;
int main() {
    string s1;
    getline(cin,s1);

    string s2;
    getline(cin,s2);

    int freq[26]={0};

    for(int i=0; i<s1.length(); i++){
        int index=s1[i]-'a';
        freq[index]++;
    }

    int windsize = s1.length();
    bool found= false;
    for(int i=0; i<s2.length(); i++){
      int windIdx=0, idx=i;
      int windFreq[26]={0};

      while(windIdx<windsize && idx<s2.length()){
        int index2=s2[idx]-'a';
        windFreq[index2]++;
        idx++;
        windIdx++;
      }
     bool same = true;

     for(int j=0; j<26; j++){
        if(freq[j]!=windFreq[j]){
            same = false;
            break;
        }
     }
     if(same){

        cout<<"it's a permutation ";
        found=true;
        break;
        
     }
    
    }
    if(!found){
        cout<<"not a permutation ";
    }

}