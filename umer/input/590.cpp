#include <iostream>
using namespace std;

void initalArry(int arr[], int size) {
    // Logical Error: Loop condition is incorrect, causing out of bounds access or skipping elements
    // Should be i < size, but is i <= size which causes off-by-one error (buffer overflow)
    for (int i = 0; i <= size; i++) { 
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