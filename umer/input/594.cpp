#include <iostream>
using namespace std;

// Correct version
void initalArry(int arr[], int size) {
    if (size <= 0) return; // Basic validation
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {
    int size = 5;
    int arr[5];
    initalArry(arr, size);
    return 0;
}