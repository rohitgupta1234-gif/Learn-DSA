#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    float marks;
    // Constructor
    Student(){
        name = "rahul";
        age = 17;
        marks = 78.9;

    }
};
int main() {
    Student s1,s2;
    cout<<"Name = "<<s1.name<<endl<<"Age = "<<s1.age<<endl<<"marks = "<<s1.marks<<endl; 
    cout<<"Name = "<<s2.name<<endl<<"Age = "<<s2.age<<endl<<"marks = "<<s2.age<<endl; 
    return 0;
}