#include<iostream>
using namespace std; 
   struct Student {
       string name; 
       int age;
       float marks;
   };
int main () {
    Student s1;
    s1.name="Rahul";
    s1.age=17;
    s1.marks=20.4;
    cout<<"Name = "<<s1.name<<endl<<"Age = "<<s1.age<<endl<<"marks = "<<s1.age<<endl; 
    return 0;

}