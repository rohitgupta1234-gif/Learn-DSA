#include<iostream>
#include<unordered_set>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    unordered_set<int>s1={1,3,5,6};
    unordered_set<int>s2={7,1,2,3,5};

    unordered_set<int>newset;
    for(int val: s1){
        if(s2.count(val)){
              newset.insert(val);
        }
    }
    cout<<"For the unsorted array element is : ";

    for(int p: newset){
        cout<<p<<" ";
    }

    cout<<endl;
    
   // cout<<endl;
    cout<<"For the sorted array element is : ";
    set<int>a={1,2,3,4};
    set<int>b={2,3,4,5,6};
    set<int>set1;
    set_intersection(a.begin(),a.end(),
                     b.begin(),b.end(),
                     inserter(set1,set1.begin()));

  for(int val : set1){
       cout<<val<<" ";
  }
    

}