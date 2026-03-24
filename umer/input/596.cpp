#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Added size parameter to handle C++ array correctly
int Find2Largest(int arr[], int size) {
    if (size < 2) return INT_MIN;
    
    // Sort array to find second largest
    // Note: sorting modifies the array which might not be desired, but more importantly:
    // Logical Error: Simply taking arr[size-2] after sorting doesn't account for duplicates.
    // e.g., {10, 10, 5} -> sorted {5, 10, 10} -> size-2 is 10, which is largest, not second largest distinct.
    // If strict second largest is required (distinct), this logic fails.
    // If non-strict (just element at index n-2), then it's "correct" for that definition but usually "second largest" implies value < max.
    // Let's assume strict second largest is the intended logical requirement which is common.
    
    sort(arr, arr + size);
    return arr[size-2]; 
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second largest is " << Find2Largest(arr, n) << endl;
    return 0;
}