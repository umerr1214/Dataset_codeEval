#include <iostream>
using namespace std;

// ❌ SEMANTIC ERROR: Wrong return type - should return int** but returns float**
float** AllocateMemory(int& rows, int& cols) {
    cout << "Enter total rows: ";
    cin >> rows;
    cout << "Enter total columns: ";
    cin >> cols;
    
    // ❌ SEMANTIC ERROR: Creating float** instead of int**
    float** matrix = new float*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new float[cols];
    }
    
    return matrix;
}

// ❌ SEMANTIC ERROR: Parameter type mismatch - should be int** but using float**
void InitializeMatrix(float** matrix, const int& rows, const int& cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0.0;  // ❌ SEMANTIC ERROR: Using float literal for int matrix
        }
    }
}

// ❌ SEMANTIC ERROR: Parameter type mismatch
void DisplayMatrix(float** matrix, const int& rows, const int& cols) {
    cout << "The array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << (int)matrix[i][j] << " ";  // ❌ SEMANTIC ERROR: Casting float to int
        }
        cout << endl;
    }
}

// ❌ SEMANTIC ERROR: Parameter type mismatch
inline void DeallocateMemory(float** matrix, const int& rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

// ❌ SEMANTIC ERROR: Parameter type mismatch and return type confusion
float* sumCol(float** matrix, const int& rows, const int& cols) {
    float* colSums = new float[cols];  // ❌ SEMANTIC ERROR: Should return int* not float*
    
    for (int j = 0; j < cols; j++) {
        colSums[j] = 0.0;
        for (int i = 0; i < rows; i++) {
            colSums[j] += matrix[i][j];
        }
    }
    
    return colSums;
}

// ❌ SEMANTIC ERROR: Parameter and return type mismatch
float* diag(float** matrix, const int& rows, const int& cols) {
    int minDim = (rows < cols) ? rows : cols;
    float* diagonal = new float[minDim];  // ❌ SEMANTIC ERROR: Should return int* not float*
    
    for (int i = 0; i < minDim; i++) {
        diagonal[i] = matrix[i][i];
    }
    
    return diagonal;
}

int main() {
    int rows, cols;
    
    // ❌ SEMANTIC ERROR: Type mismatch in assignment
    float** matrix = AllocateMemory(rows, cols);  // Should be int**
    
    // Initialize matrix
    InitializeMatrix(matrix, rows, cols);
    
    // Display matrix
    DisplayMatrix(matrix, rows, cols);
    
    // Test sumCol function
    float* columnSums = sumCol(matrix, rows, cols);  // ❌ SEMANTIC ERROR: Should be int*
    cout << "Column sums: ";
    for (int j = 0; j < cols; j++) {
        cout << (int)columnSums[j] << " ";  // ❌ SEMANTIC ERROR: Casting float to int
    }
    cout << endl;
    
    // Test diag function
    int minDim = (rows < cols) ? rows : cols;
    float* diagonal = diag(matrix, rows, cols);  // ❌ SEMANTIC ERROR: Should be int*
    cout << "Diagonal elements: ";
    for (int i = 0; i < minDim; i++) {
        cout << (int)diagonal[i] << " ";  // ❌ SEMANTIC ERROR: Casting float to int
    }
    cout << endl;
    
    // Deallocate memory
    delete[] columnSums;
    delete[] diagonal;
    DeallocateMemory(matrix, rows);
    
    return 0;
}