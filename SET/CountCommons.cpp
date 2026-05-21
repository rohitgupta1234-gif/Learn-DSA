#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    int N, M;

    cout << "Enter the number of Elements in set1: ";
    cin >> N;

    cout << "Enter the number of Elements in set2: ";
    cin >> M;

    string s1, s2;

    cout << "Enter the set1 Elements: ";
    cin >> s1;

    cout << "Enter the set2 Elements: ";
    cin >> s2;

    unordered_set<char> st1, st2;

    
    for(char ch : s1) {
        st1.insert(ch);
    }

    
    for(char ch : s2) {
        st2.insert(ch);
    }

    int count = 0;

    
    for(char ch : st1) {
        if(st2.find(ch) != st2.end()) {
            count++;
        }
    }

    cout << "Common unique characters count = " << count;

    return 0;
}