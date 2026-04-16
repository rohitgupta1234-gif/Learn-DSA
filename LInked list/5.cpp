#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    float marks;
    // Constructor TAKE INPUT 
    Student(string n, int a, float m){
        name = n;
        age = a;
        marks = m;

    }
};
int main() {
    Student s1("abhishek",23,90);
    Student s2("rohit",23,190);

    cout<<"Name = "<<s1.name<<endl<<"Age = "<<s1.age<<endl<<"marks = "<<s1.marks<<endl; 
    cout<<"Name = "<<s2.name<<endl<<"Age = "<<s2.age<<endl<<"marks = "<<s2.marks<<endl; 
    return 0;
}