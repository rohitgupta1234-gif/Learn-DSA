#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    set<int>s;
    cout<<"Enter the element of array : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    for(int val : s){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<s.size();

}