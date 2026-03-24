#include <iostream>
using namespace std;

void initalArry(int arr[], int size) {
    // Robustness Issue: No check if size is negative or zero, or if cin fails
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {
    int size = -5; // Negative size passed
    int arr[5];
    initalArry(arr, size);
    return 0;
}