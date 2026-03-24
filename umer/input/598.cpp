#include <iostream>
#include <climits>
using namespace std;

// Added size parameter to handle C++ array correctly
int Find2Largest(int arr[], int size) {
    // Robustness Issue: No check for size < 2 or null pointer (though array decay makes null tricky)
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {5}; // Too small array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second largest is " << Find2Largest(arr, n) << endl;
    return 0;
}