#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Step 1: Find maximum element
    int maxi = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi) maxi = arr[i];
    }

    // Step 2: Apply counting sort for each digit
    for (int pos = 1; maxi / pos > 0; pos *= 10) {
        // Counting sort logic inside main
        vector<int> freq(10, 0);

        // Frequency of digits
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / pos) % 10;
            freq[digit]++;
        }

        // Cumulative frequency
        for (int i = 1; i < 10; i++) {
            freq[i] += freq[i-1];
        }

        // Output array (stable placement)
        vector<int> ans(n);
        for (int i = n-1; i >= 0; i--) {
            int digit = (arr[i] / pos) % 10;
            ans[freq[digit] - 1] = arr[i];
            freq[digit]--;
        }

        // Copy back to original array
        for (int i = 0; i < n; i++) {
            arr[i] = ans[i];
        }
    }

    // Step 3: Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
