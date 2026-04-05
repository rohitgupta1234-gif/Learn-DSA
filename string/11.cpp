//Permutation in string
#include<iostream>
#include<vector>
using namespace std;

bool checkEqual(int a[26], int b[26]) {
    for(int i=0;i<26;i++){
        if(a[i] != b[i])
        return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {

    int count1[26] = {0};

    for(int i=0;i<s1.length();i++){
        count1[s1[i]-'a']++;
    }

    int window = s1.length();
    int count2[26] = {0};

    // first window
    for(int i=0;i<window && i<s2.length();i++){
        count2[s2[i]-'a']++;
    }

    if(checkEqual(count1,count2))
    return true;

    // sliding window
    for(int i=window;i<s2.length();i++){

        count2[s2[i]-'a']++;              // add new char
        count2[s2[i-window]-'a']--;       // remove old char

        if(checkEqual(count1,count2))
        return true;
    }

    return false;
}

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout<<checkInclusion(s1,s2);
}
