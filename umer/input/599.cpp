#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

// Added size parameter to handle C++ array correctly
int Find2Largest(int arr[], int size) {
    if (size < 2) return INT_MIN;
    
    // Readability/Efficiency Issue: Using a vector to copy array elements and sorting, 
    // which is O(N log N) space O(N), instead of O(N) time and O(1) space.
    vector<int> v;
    for (int i = 0; i < size; i++) {
        v.push_back(arr[i]);
    }
    
    // Bubble sort implementation for maximum inefficiency and code verbosity
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    
    // Find second largest from sorted vector, handling duplicates
    int largest = v[size-1];
    for (int i = size - 2; i >= 0; i--) {
        if (v[i] != largest) {
            return v[i];
        }
    }
    
    return INT_MIN;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second largest is " << Find2Largest(arr, n) << endl;
    return 0;
}