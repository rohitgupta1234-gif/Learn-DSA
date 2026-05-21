#include<iostream>
#include<vector>
using namespace std;
void pass(vector<int>&v1){
    for(int i=0; i<5; i++){
        v1[i]=5;
    }
}
int main() {
    vector<int>v(5,0);
    pass(v);

     for(int i=0; i<5; i++){
       cout<<v[i]<<" ";
    }
    
}