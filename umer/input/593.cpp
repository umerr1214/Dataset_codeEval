#include <iostream>
using namespace std;

void initalArry(int arr[], int size) {
    // Readability/Efficiency Issue: Using a while loop with a separate counter instead of a for loop,
    // and printing redundant messages
    int i = 0;
    while (i < size) {
        cout << "Please enter the integer value for the element at index " << i << " of the array: ";
        int temp;
        cin >> temp;
        arr[i] = temp;
        i++;
    }
}

int main() {
    int size = 5;
    int arr[5];
    initalArry(arr, size);
    return 0;
}