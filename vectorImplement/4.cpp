#include<iostream>
using namespace std;
int main() {
    string s1;
    getline(cin,s1);

    string s2;
    getline(cin,s2);

    int firstfreq[26]={0};
    for(int i=0; i<s1.length(); i++){
        int index1=s1[i]-'a';
        firstfreq[index1]++;
    }
    int window=s1.length();
    bool found =false;
    
    for(int i=0; i<s2.length(); i++){
        
        int secondfreq[26]={0};
        int idx=i;
        int window=0;
       
        while(window<s1.length() && idx<s2.length()){
            int index2=s2[idx]-'a';
             secondfreq[index2]++;
             window++;
             idx++;
            
             }
             bool same =true;
              for(int i=0; i<26; i++){
                if(firstfreq[i]!=secondfreq[i]){
                    same=false;
                    break;
                }
             
        }
        if(same){
            cout<<"it's a permutation "<<endl;
            found=true;
            break;
        }
        
    }
    if(!found){
        cout<<"not a permutation"<<endl;
    }

}