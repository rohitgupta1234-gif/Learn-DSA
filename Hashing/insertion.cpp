#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the number of elements : ";
    cin >> n;

    int arr[n];

    cout << "Enter the Array elements : ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hashtable[10][1];

    // Initialize with -1
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 1; j++) {
            hashtable[i][j] = -1;
        }
    }

    // Insert elements
    for(int i = 0; i < n; i++) {
        hashtable[arr[i] % 10][0] = arr[i];
    }

    cout << endl << endl;

    cout << "Hashtable is : " << endl;

    // Display
    for(int j = 0; j < 10; j++) {

        cout << "index at " << j << " -> ";

        cout << hashtable[j][0] << endl;
    }

    return 0;
}