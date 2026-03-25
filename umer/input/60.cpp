#include <iostream>
using namespace std;

/**
 * Exercise 1: Function to allocate memory for a 2D matrix
 * @param rows Reference to store number of rows
 * @param cols Reference to store number of columns
 * @return Pointer to dynamically allocated 2D array
 */
int** AllocateMemory(int& rows, int& cols) {
    // Get matrix dimensions from user with input validation
    do {
        cout << "Enter total rows: ";
        cin >> rows;
        if (rows <= 0) {
            cout << "Error: Rows must be positive. Please try again.\n";
        }
    } while (rows <= 0);
    
    do {
        cout << "Enter total columns: ";
        cin >> cols;
        if (cols <= 0) {
            cout << "Error: Columns must be positive. Please try again.\n";
        }
    } while (cols <= 0);
    
    // Allocate memory for array of row pointers
    int** matrix = new(nothrow) int*[rows];
    if (!matrix) {
        cout << "Error: Memory allocation failed for rows.\n";
        return nullptr;
    }
    
    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = new(nothrow) int[cols];
        if (!matrix[i]) {
            // Clean up previously allocated memory
            for (int j = 0; j < i; j++) {
                delete[] matrix[j];
            }
            delete[] matrix;
            cout << "Error: Memory allocation failed for row " << i << ".\n";
            return nullptr;
        }
    }
    
    return matrix;
}

/**
 * Exercise 2: Function to initialize all matrix elements to 0
 * @param matrix Pointer to 2D array
 * @param rows Number of rows
 * @param cols Number of columns
 */
void InitializeMatrix(int** matrix, const int& rows, const int& cols) {
    if (!matrix) {
        cout << "Error: Cannot initialize null matrix.\n";
        return;
    }
    
    for (int i = 0; i < rows; i++) {
        if (!matrix[i]) {
            cout << "Error: Row " << i << " is null.\n";
            continue;
        }
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0;
        }
    }
}

/**
 * Exercise 3: Function to display the matrix
 * @param matrix Pointer to 2D array
 * @param rows Number of rows
 * @param cols Number of columns
 */
void DisplayMatrix(int** matrix, const int& rows, const int& cols) {
    if (!matrix) {
        cout << "Error: Cannot display null matrix.\n";
        return;
    }
    
    cout << "The array is:\n";
    for (int i = 0; i < rows; i++) {
        if (!matrix[i]) {
            cout << "Error: Row " << i << " is null.\n";
            continue;
        }
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

/**
 * Exercise 4: Inline function to deallocate matrix memory
 * @param matrix Pointer to 2D array
 * @param rows Number of rows
 */
inline void DeallocateMemory(int** matrix, const int& rows) {
    if (!matrix) {
        return; // Nothing to deallocate
    }
    
    // Deallocate each row
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    
    // Deallocate array of row pointers
    delete[] matrix;
}

/**
 * Exercise 6: Function to calculate sum of each column
 * @param matrix Pointer to 2D array
 * @param rows Number of rows
 * @param cols Number of columns
 * @return Pointer to array containing column sums
 */
int* sumCol(int** matrix, const int& rows, const int& cols) {
    if (!matrix || rows <= 0 || cols <= 0) {
        cout << "Error: Invalid matrix or dimensions for column sum.\n";
        return nullptr;
    }
    
    // Allocate memory for column sums
    int* columnSums = new(nothrow) int[cols];
    if (!columnSums) {
        cout << "Error: Memory allocation failed for column sums.\n";
        return nullptr;
    }
    
    // Initialize column sums to 0
    for (int j = 0; j < cols; j++) {
        columnSums[j] = 0;
    }
    
    // Calculate column sums
    for (int i = 0; i < rows; i++) {
        if (!matrix[i]) {
            cout << "Warning: Row " << i << " is null, skipping.\n";
            continue;
        }
        for (int j = 0; j < cols; j++) {
            columnSums[j] += matrix[i][j];
        }
    }
    
    return columnSums;
}

/**
 * Exercise 7: Function to extract diagonal elements
 * @param matrix Pointer to 2D array
 * @param rows Number of rows
 * @param cols Number of columns
 * @return Pointer to array containing diagonal elements
 */
int* diag(int** matrix, const int& rows, const int& cols) {
    if (!matrix || rows <= 0 || cols <= 0) {
        cout << "Error: Invalid matrix or dimensions for diagonal extraction.\n";
        return nullptr;
    }
    
    // Determine size of diagonal (minimum of rows and columns)
    int minDimension = (rows < cols) ? rows : cols;
    
    // Allocate memory for diagonal elements
    int* diagonal = new(nothrow) int[minDimension];
    if (!diagonal) {
        cout << "Error: Memory allocation failed for diagonal elements.\n";
        return nullptr;
    }
    
    // Extract diagonal elements
    for (int i = 0; i < minDimension; i++) {
        if (!matrix[i]) {
            cout << "Warning: Row " << i << " is null, setting diagonal element to 0.\n";
            diagonal[i] = 0;
        } else {
            diagonal[i] = matrix[i][i];
        }
    }
    
    return diagonal;
}

int main() {
    int rows, cols;
    
    // Allocate memory for matrix
    int** matrix = AllocateMemory(rows, cols);
    if (!matrix) {
        cout << "Failed to allocate matrix memory. Exiting.\n";
        return 1;
    }
    
    // Initialize matrix elements to 0
    InitializeMatrix(matrix, rows, cols);
    
    // Display the matrix
    DisplayMatrix(matrix, rows, cols);
    
    // Test column sum function
    int* columnSums = sumCol(matrix, rows, cols);
    if (columnSums) {
        cout << "Column sums: ";
        for (int j = 0; j < cols; j++) {
            cout << columnSums[j] << " ";
        }
        cout << "\n";
    }
    
    // Test diagonal extraction function
    int minDimension = (rows < cols) ? rows : cols;
    int* diagonal = diag(matrix, rows, cols);
    if (diagonal) {
        cout << "Diagonal elements: ";
        for (int i = 0; i < minDimension; i++) {
            cout << diagonal[i] << " ";
        }
        cout << "\n";
    }
    
    // Clean up allocated memory
    if (columnSums) {
        delete[] columnSums;
    }
    if (diagonal) {
        delete[] diagonal;
    }
    DeallocateMemory(matrix, rows);
    
    cout << "Program completed successfully.\n";
    return 0;
}