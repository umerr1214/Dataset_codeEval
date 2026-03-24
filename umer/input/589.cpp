#include <iostream>
using namespace std;

void initalArry(int arr[], int size) { // Added size parameter for C++ arrays
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i]
    }
}

int main() {
    int size = 5;
    int arr[5];
    initalArry(arr, size);
    return 0;
}