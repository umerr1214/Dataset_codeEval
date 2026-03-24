#include <iostream>
#include <climits>
using namespace std;

// Added size parameter to handle C++ array correctly
double Find2Largest(int arr[], int size) { // Semantic Error: Returns double instead of int
    if (size < 2) return INT_MIN; 
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return (double)second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second largest is " << Find2Largest(arr, n) << endl;
    return 0;
}