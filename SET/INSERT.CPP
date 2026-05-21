#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of element in set 1 : ";
    cin>>n;

    vector<int>set1(n);
    for(int i=0; i<n; i++){
        cin>>set1[i];
    }

    int m;
        cout<<"Enter the number of element in set 2 : ";
        cin>>m;
    
    vector<int>set2(m);
    for(int i=0; i<m; i++){
        cin>>set2[i];
    }
    

    unordered_set<int>newset;
     newset.insert(set1.begin(), set1.end());

    newset.insert(set2.begin(), set2.end());

    for(int x : newset) {
        cout << x << " ";
    }




}