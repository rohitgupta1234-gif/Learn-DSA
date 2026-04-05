//Maximum Occurence Element
#include <iostream>
using namespace std;

char getMaxOccChar(string s) {
    int count[26] = {0};

    // count frequency
    for(int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';
        count[index]++;
    }

    int maxi = -1;
    int ans = 0;

    for(int i = 0; i < 26; i++) {
        if(count[i] > maxi) {
            maxi = count[i];
            ans = i;
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main() {
    string s = "testsample";
    cout << getMaxOccChar(s);
}