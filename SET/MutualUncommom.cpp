#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements in array 1: ";
    cin >> n;

    int m;
    cout << "Enter the number of elements in array 2: ";
    cin >> m;

    int arr1[n];
    int arr2[m];

    cout << "Enter the elements of array1: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the elements of array2: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    set<int> s1;
    set<int> s2;

    // Insert array1 elements into s1
    for(int i = 0; i < n; i++) {
        s1.insert(arr1[i]);
    }

    // Insert array2 elements into s2
    for(int i = 0; i < m; i++) {
        s2.insert(arr2[i]);
    }

    set<int> newset;

    // s1 - s2
    set_difference(
        s1.begin(), s1.end(),
        s2.begin(), s2.end(),
        inserter(newset, newset.begin())
    );

    cout << "Set Difference (s1 - s2): ";

    for(int x : newset) {
        cout << x << " ";
    }

    return 0;
}