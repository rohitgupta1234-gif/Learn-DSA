#include<iostream>
#include<vector>
using namespace std;
int main () {
    // int n;
    // cin>>n;
    string s1;
    getline(cin,s1);

    // cout<<s1.at(3)<<endl;

    //string s2;
    //getline(cin,s2);    

    // string fullname=s1+" "+s2;
    // cout<<fullname<<endl<<endl;

    // s1.append(s2);
    // cout<<s1<<endl<<endl;

    // s1.insert(5," black");
    // cout<<s1<<endl<<endl;

    // s1.replace(3,2,"cats");
    // cout<<s1<<endl<<endl;


    // s1.erase(3,4);
    // cout<<s1<<endl<<endl;

//    int p= s1.compare(s2);
//     if(p==0){
//         cout<<"it's you ";
//         cout<<endl<<endl;
//     }
//     else{
//         cout<<"no need to compare ";
//     }

   int pos= s1.find("ab");
   cout<<pos;
   
   
   


     

}