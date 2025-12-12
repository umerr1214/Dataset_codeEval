#include <iostream>
using namespace std;

// Exercise 1: Function to allocate memory for matrix
int** AllocateMemory(int& rows, int& cols) {
    cout << "Enter total rows: ";
    cin >> rows;
    cout << "Enter total columns: ";
    cin >> cols;
    
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    
    return matrix;
}

// Exercise 2: Function to initialize matrix elements to 0
void InitializeMatrix(int** matrix, const int& rows, const int& cols) {
    // ❌ LOGICAL ERROR: Wrong initialization - using 1 instead of 0
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 1;  // Should be 0, not 1
        }
    }
}

// Exercise 3: Function to display matrix
void DisplayMatrix(int** matrix, const int& rows, const int& cols) {
    cout << "The array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Exercise 4: Inline function to deallocate memory
inline void DeallocateMemory(int** matrix, const int& rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

// Exercise 6: Function to return sum of each column
int* sumCol(int** matrix, const int& rows, const int& cols) {
    int* colSums = new int[cols];
    
    // ❌ LOGICAL ERROR: Wrong loop logic - iterating rows in outer loop instead of columns
    for (int i = 0; i < rows; i++) {
        colSums[i] = 0;  // Should be colSums[j] = 0 for each column
        for (int j = 0; j < cols; j++) {
            colSums[i] += matrix[i][j];  // Should be colSums[j] += matrix[i][j]
        }
    }
    
    return colSums;
}

// Exercise 7: Function to return diagonal elements
int* diag(int** matrix, const int& rows, const int& cols) {
    int minDim = (rows < cols) ? rows : cols;
    int* diagonal = new int[minDim];
    
    // ❌ LOGICAL ERROR: Wrong indexing for diagonal elements
    for (int i = 0; i < minDim; i++) {
        diagonal[i] = matrix[i][minDim - 1 - i];  // Should be matrix[i][i], not anti-diagonal
    }
    
    return diagonal;
}

int main() {
    int rows, cols;
    
    // Allocate memory
    int** matrix = AllocateMemory(rows, cols);
    
    // Initialize matrix
    InitializeMatrix(matrix, rows, cols);
    
    // Display matrix
    DisplayMatrix(matrix, rows, cols);
    
    // Test sumCol function
    int* columnSums = sumCol(matrix, rows, cols);
    cout << "Column sums: ";
    for (int j = 0; j < cols; j++) {
        cout << columnSums[j] << " ";
    }
    cout << endl;
    
    // Test diag function
    int minDim = (rows < cols) ? rows : cols;
    int* diagonal = diag(matrix, rows, cols);
    cout << "Diagonal elements: ";
    for (int i = 0; i < minDim; i++) {
        cout << diagonal[i] << " ";
    }
    cout << endl;
    
    // Deallocate memory
    delete[] columnSums;
    delete[] diagonal;
    DeallocateMemory(matrix, rows);
    
    return 0;
}