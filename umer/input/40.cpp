#include <iostream>
using namespace std;

int main() {
    int M, N;
    
    // ❌ ROBUSTNESS ISSUE: No input validation
    cout << "Enter size of array A (M): ";
    cin >> M;  // No check for negative or zero values
    cout << "Enter size of array B (N): ";
    cin >> N;  // No check for negative or zero values
    
    // ❌ ROBUSTNESS ISSUE: No bounds checking for array sizes
    int A[M], B[N], C[M + N];  // What if M or N is very large or negative?
    
    // Input array A
    cout << "Enter elements of array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];  // No input validation
    }
    
    // Input array B
    cout << "Enter elements of array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];  // No input validation
    }
    
    // Initialize variables for mixing
    int leftIndex = 0, rightIndex = M + N - 1;
    
    // Copy even numbers of A from left to right
    for (int i = 0; i < M; i++) {
        if (A[i] % 2 == 0) {
            // ❌ ROBUSTNESS ISSUE: No bounds checking
            C[leftIndex++] = A[i];  // leftIndex could exceed array bounds
        }
    }
    
    // Copy odd numbers of A from right to left
    for (int i = 0; i < M; i++) {
        if (A[i] % 2 != 0) {
            // ❌ ROBUSTNESS ISSUE: No bounds checking
            C[rightIndex--] = A[i];  // rightIndex could go below 0
        }
    }
    
    // Copy even numbers of B from left to right
    for (int i = 0; i < N; i++) {
        if (B[i] % 2 == 0) {
            // ❌ ROBUSTNESS ISSUE: No bounds checking
            C[leftIndex++] = B[i];  // Could overwrite odd numbers or exceed bounds
        }
    }
    
    // Copy odd numbers of B from right to left
    for (int i = 0; i < N; i++) {
        if (B[i] % 2 != 0) {
            // ❌ ROBUSTNESS ISSUE: No bounds checking
            C[rightIndex--] = B[i];  // Could overwrite even numbers or go below 0
        }
    }
    
    // Display arrays
    cout << "\nArray A: ";
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";
    }
    
    cout << "\nArray B: ";
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
    
    cout << "\nArray C: ";
    for (int i = 0; i < M + N; i++) {
        cout << C[i] << " ";  // ❌ ROBUSTNESS ISSUE: Could print uninitialized values
    }
    cout << endl;
    
    return 0;
}