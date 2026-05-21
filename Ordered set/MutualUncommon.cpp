#include<iostream>
#include<unordered_set>
using namespace std;
int main() {
  int m;
  cout<<"Enter the number of Elements in set 1 :";
  cin>>m;

  int n;
  cout<<"Enter the number of Element in set 2 : ";
  cin>>n;
   
  unordered_set<int>set1;
  unordered_set<int>set2;
  cout<<"Enter the number of Elements in set1 :";
  for(int i=0; i<m; i++){
    int x;
    cin>>x;
    set1.insert(x);
  }

  cout<<"Enter the number of Elements in set2 :";
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    set2.insert(x);
  }
  
  unordered_set<int>ans1;
  unordered_set<int>ans2;
  for(int val : set1){
    if(!set2.count(val)){
        ans1.insert(val);
    }
  }

  for(int val : set2){
    if(!set1.count(val)){
        ans2.insert(val);
    }
  }
  cout<<endl;
  int answer=(ans1.size())*(ans2.size());
  cout<<"Your answer is "<<answer;
  


}