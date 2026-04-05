// Remove all abc for a substring
#include<iostream>
using namespace std;

string removeOccurrences(string s, string part) {

    int pos = s.find(part);

    while(pos >= 0){
        s.erase(pos, part.length());
        pos = s.find(part);
    }

    return s;
}

int main(){

    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeOccurrences(s, part);

}

