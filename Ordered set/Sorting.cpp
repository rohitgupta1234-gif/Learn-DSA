#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<set>
using namespace std;
int main() {
   unordered_set<int>set1={1,13,14,15,6,7,0};
   vector<int>newset(set1.begin(),set1.end());

   sort(newset.begin(),newset.end());
   
   cout<<"For Ascending Order : ";
   for(int val : newset){
       cout<<val<<" ";
   }


   cout<<endl;
   //For descending
   unordered_set<int>set2={1,3,4,5,8,10,13};
   vector<int>naya(set2.begin(),set2.end());
   sort(naya.begin(),naya.end());
   cout<<"For descending order : ";
   for(int p:naya){
     cout<<p<<" ";
   }

}