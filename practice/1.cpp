#include<iostream>
#include<vector>
using namespace std;
vector<int> reversethenumber(vector<int>v){
    int st=0;
    int e= v.size()-1;
    while(st<=e){
        swap(v[st],v[e]);
    }
    return v;
}
void print(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
 vector<int>v;
 v.push_back(17);
 v.push_back(18);
 v.push_back(19);
 v.push_back(170);
 v.push_back(172);
 v.push_back(13);
  
 vector<int>ans=reversethenumber(v);
 print(ans);
 return 0;

}