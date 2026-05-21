#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of arrays : ";
    cin >> n;

    int m;
    cout << "Enter the number of unique positive integers in each array : ";
    cin >> m;

    
    set<int> s[n];


    for(int i = 0; i < n; i++) {

        cout << "Enter elements of set " << i + 1 << " : ";

        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;
            s[i].insert(x);
        }
    }

    
    set<int> result = s[0];

    
    for(int i = 1; i < n; i++) {

        set<int> temp;

        set_intersection(result.begin(), result.end(),
                         s[i].begin(), s[i].end(),
                         inserter(temp, temp.begin()));

        result = temp;
    }

    
    cout << "Common elements are : ";

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}