#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<set>
using namespace std;
int main(){
    unordered_set<int>a={1,4,5,7,9};
    unordered_set<int>b={7,7,3,2,5};

    unordered_set<int>differnce;

    for(int num: a){
        if(!b.count(num)){
           differnce.insert(num);
        }
    }

    cout<<"For Unsorted Element :";
    for(int p: differnce){
        cout<<p<<" ";
    }
    cout<<endl;
    // Sorted element
    set<int>set1={3,4,5,6,7};
    set<int>set2={4,5,6,8,9};

    set<int>newset;

    set_difference(set1.begin(),set1.end(),
                  set2.begin(),set2.end(),
                   inserter(newset,newset.begin()));
    cout<<"For Sorted is : ";
    for(int p:newset){
        cout<<p<<" ";
    }

}