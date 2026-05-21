#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Row of Elements : ";
    cin>>n;

    int m;
    cout<<"Enter the Column of Elements : ";
    cin>>m;

    set<int>s[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements s"<<i<<" : ";
        for(int j=0; j<m; j++){
            int x;
            cin>>x;
            s[i].insert(x);
        }
    }

    set<int>result=s[0];
    for(int i=1; i<n; i++){
        set<int>temp;
        set_intersection(s[i].begin(),s[i].end(),
                        result.begin(),result.end(),
                    inserter(temp,temp.begin()));
        result=temp;
    }

    cout<<"Common Elements is : ";
    for(int val:result){
        cout<<val<<" ";
    }



}