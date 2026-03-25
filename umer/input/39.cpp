#include <iostream>
using namespace std;

int main() {
    int M, N;
    
    // Get sizes of arrays A and B
    cout << "Enter size of array A (M): ";
    cin >> M;
    cout << "Enter size of array B (N): ";
    cin >> N;
    
    // ❌ SEMANTIC ERROR: Wrong data types - using float arrays for integer operations
    float A[M], B[N], C[M + N];  // Should be int arrays, not float
    
    // Input array A
    cout << "Enter elements of array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];  // Reading integers into float array
    }
    
    // Input array B
    cout << "Enter elements of array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];  // Reading integers into float array
    }
    
    // Initialize variables for mixing
    int leftIndex = 0, rightIndex = M + N - 1;
    
    // Copy even numbers of A from left to right
    for (int i = 0; i < M; i++) {
        // ❌ SEMANTIC ERROR: Using modulo on float values
        if ((int)A[i] % 2 == 0) {  // Casting float to int for modulo operation
            C[leftIndex++] = A[i];
        }
    }
    
    // Copy odd numbers of A from right to left
    for (int i = 0; i < M; i++) {
        if ((int)A[i] % 2 != 0) {  // Casting float to int for modulo operation
            C[rightIndex--] = A[i];
        }
    }
    
    // Copy even numbers of B from left to right
    for (int i = 0; i < N; i++) {
        if ((int)B[i] % 2 == 0) {  // Casting float to int for modulo operation
            C[leftIndex++] = B[i];
        }
    }
    
    // Copy odd numbers of B from right to left
    for (int i = 0; i < N; i++) {
        if ((int)B[i] % 2 != 0) {  // Casting float to int for modulo operation
            C[rightIndex--] = B[i];
        }
    }
    
    // Display arrays
    cout << "\nArray A: ";
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";  // Displaying float values as integers
    }
    
    cout << "\nArray B: ";
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";  // Displaying float values as integers
    }
    
    cout << "\nArray C: ";
    for (int i = 0; i < M + N; i++) {
        cout << C[i] << " ";  // Displaying float values as integers
    }
    cout << endl;
    
    return 0;
}