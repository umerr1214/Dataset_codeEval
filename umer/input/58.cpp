#include <iostream>
using namespace std;

// Exercise 1: Function to allocate memory for matrix
int** AllocateMemory(int& rows, int& cols) {
    cout << "Enter total rows: ";
    cin >> rows;  // ❌ ROBUSTNESS ISSUE: No input validation
    cout << "Enter total columns: ";
    cin >> cols;  // ❌ ROBUSTNESS ISSUE: No check for negative values
    
    // ❌ ROBUSTNESS ISSUE: No check for memory allocation failure
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];  // Could fail if cols is very large
    }
    
    return matrix;
}

// Exercise 2: Function to initialize matrix elements to 0
void InitializeMatrix(int** matrix, const int& rows, const int& cols) {
    // ❌ ROBUSTNESS ISSUE: No null pointer check
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0;  // Could crash if matrix is null
        }
    }
}

// Exercise 3: Function to display matrix
void DisplayMatrix(int** matrix, const int& rows, const int& cols) {
    cout << "The array is:" << endl;
    // ❌ ROBUSTNESS ISSUE: No null pointer check
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";  // Could crash if matrix is null
        }
        cout << endl;
    }
}

// Exercise 4: Inline function to deallocate memory
inline void DeallocateMemory(int** matrix, const int& rows) {
    // ❌ ROBUSTNESS ISSUE: No null pointer check before deallocation
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];  // Could crash if matrix[i] is null
    }
    delete[] matrix;  // Could crash if matrix is null
}

// Exercise 6: Function to return sum of each column
int* sumCol(int** matrix, const int& rows, const int& cols) {
    // ❌ ROBUSTNESS ISSUE: No check for memory allocation failure
    int* colSums = new int[cols];
    
    // ❌ ROBUSTNESS ISSUE: No null pointer check for matrix
    for (int j = 0; j < cols; j++) {
        colSums[j] = 0;
        for (int i = 0; i < rows; i++) {
            colSums[j] += matrix[i][j];  // Could crash if matrix is null
        }
    }
    
    return colSums;
}

// Exercise 7: Function to return diagonal elements
int* diag(int** matrix, const int& rows, const int& cols) {
    int minDim = (rows < cols) ? rows : cols;
    // ❌ ROBUSTNESS ISSUE: No check for memory allocation failure
    int* diagonal = new int[minDim];
    
    // ❌ ROBUSTNESS ISSUE: No null pointer check
    for (int i = 0; i < minDim; i++) {
        diagonal[i] = matrix[i][i];  // Could crash if matrix is null
    }
    
    return diagonal;
}

int main() {
    int rows, cols;
    
    // Allocate memory
    int** matrix = AllocateMemory(rows, cols);
    
    // ❌ ROBUSTNESS ISSUE: No check if matrix allocation succeeded
    // Initialize matrix
    InitializeMatrix(matrix, rows, cols);
    
    // Display matrix
    DisplayMatrix(matrix, rows, cols);
    
    // Test sumCol function
    int* columnSums = sumCol(matrix, rows, cols);
    // ❌ ROBUSTNESS ISSUE: No check if columnSums allocation succeeded
    cout << "Column sums: ";
    for (int j = 0; j < cols; j++) {
        cout << columnSums[j] << " ";
    }
    cout << endl;
    
    // Test diag function
    int minDim = (rows < cols) ? rows : cols;
    int* diagonal = diag(matrix, rows, cols);
    // ❌ ROBUSTNESS ISSUE: No check if diagonal allocation succeeded
    cout << "Diagonal elements: ";
    for (int i = 0; i < minDim; i++) {
        cout << diagonal[i] << " ";
    }
    cout << endl;
    
    // ❌ ROBUSTNESS ISSUE: No null checks before deallocation
    // Deallocate memory
    delete[] columnSums;
    delete[] diagonal;
    DeallocateMemory(matrix, rows);
    
    return 0;
}