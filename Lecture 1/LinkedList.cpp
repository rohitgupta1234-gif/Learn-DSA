#include<iostream>
using namespace std;
int main() {
    int n; 
    cin>>n;

    int a=10;
    int *p= &a;
    int **q = &p;

    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<&p<<endl;
    cout<<*q<<endl<<**q;

}