#include <iostream>
using namespace std;

int main() {
    int M, N;
    
    // Get sizes of arrays A and B
    cout << "Enter size of array A (M): ";
    cin >> M;
    cout << "Enter size of array B (N): ";
    cin >> N;
    
    // Create arrays A, B, and C
    int A[M], B[N], C[M + N];
    
    // Input array A
    cout << "Enter elements of array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    
    // Input array B
    cout << "Enter elements of array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    // Initialize variables for mixing
    int leftIndex = 0, rightIndex = M + N - 1;
    
    // Copy even numbers of A from left to right
    for (int i = 0; i < M; i++) {
        if (A[i] % 2 == 0) {
            C[leftIndex++] = A[i];
        }
    }
    
    // Copy odd numbers of A from right to left
    for (int i = 0; i < M; i++) {
        if (A[i] % 2 != 0) {
            C[rightIndex--] = A[i];
        }
    }
    
    // Copy even numbers of B from left to right
    for (int i = 0; i < N; i++) {
        if (B[i] % 2 == 0) {
            C[leftIndex++] = B[i];
        }
    }
    
    // Copy odd numbers of B from right to left
    for (int i = 0; i < N; i++) {
        if (B[i] % 2 != 0) {
            C[rightIndex--] = B[i];
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
        cout << C[i] << " ";
    }
    cout << endl;
    
    return 0;
}