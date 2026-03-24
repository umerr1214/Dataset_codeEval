#include <iostream>
using namespace std;

// Semantic Error: Passing array by value is not possible in C++ (it decays to pointer), 
// but attempting to use vector syntax or concept without vector
int initalArry(int arr[], int size) { // Semantic Error: Returns int but function should be void based on usage
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    return 0; // Returning 0 but caller expects void
}

int main() {
    int size = 5;
    int arr[5];
    initalArry(arr, size);
    return 0;
}