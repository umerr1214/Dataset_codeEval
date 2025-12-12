#include <iostream>
#include <cctype>
using namespace std;

// Function to allocate memory for matrix
char** AllocateMemory(int& rows, int& cols) {
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    char** matrix = new char*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new char[cols];
    }
    
    return matrix;
}

// Function to input matrix values
void InputMatrix(char** matrix, const int rows, const int cols) {
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to display matrix
void DisplayMatrix(char** matrix, const int& rows, const int& cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to separate characters into arrays
void SeparateCharacters(char** matrix, const int& rows, const int& cols, 
                       char*& alphabets, char*& numbers, char*& specialChars,
                       int& alphaCount, int& numCount, int& specialCount) {
    
    // First pass: count elements
    alphaCount = numCount = specialCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // ❌ LOGICAL ERROR: Wrong classification logic
            if (isdigit(matrix[i][j])) {  // Should be isalpha
                alphaCount++;
            } else if (isalpha(matrix[i][j])) {  // Should be isdigit
                numCount++;
            } else {
                specialCount++;
            }
        }
    }
    
    // Allocate arrays with exact sizes
    alphabets = new char[alphaCount];
    numbers = new char[numCount];
    specialChars = new char[specialCount];
    
    // Second pass: fill arrays (same wrong logic)
    int aIndex = 0, nIndex = 0, sIndex = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // ❌ LOGICAL ERROR: Same wrong classification in filling
            if (isdigit(matrix[i][j])) {  // Should be isalpha
                alphabets[aIndex++] = matrix[i][j];
            } else if (isalpha(matrix[i][j])) {  // Should be isdigit
                numbers[nIndex++] = matrix[i][j];
            } else {
                specialChars[sIndex++] = matrix[i][j];
            }
        }
    }
}

int main() {
    int rows, cols;
    
    // Allocate memory for matrix
    char** matrix = AllocateMemory(rows, cols);
    
    // Input matrix
    InputMatrix(matrix, rows, cols);
    
    // Display matrix
    DisplayMatrix(matrix, rows, cols);
    
    // Separate characters
    char* alphabets;
    char* numbers;
    char* specialChars;
    int alphaCount, numCount, specialCount;
    
    SeparateCharacters(matrix, rows, cols, alphabets, numbers, specialChars,
                      alphaCount, numCount, specialCount);
    
    // Display results
    cout << "Alphabets: ";
    for (int i = 0; i < alphaCount; i++) {
        cout << alphabets[i] << " ";
    }
    cout << endl;
    
    cout << "Numbers: ";
    for (int i = 0; i < numCount; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    cout << "Special Characters: ";
    for (int i = 0; i < specialCount; i++) {
        cout << specialChars[i] << " ";
    }
    cout << endl;
    
    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] alphabets;
    delete[] numbers;
    delete[] specialChars;
    
    return 0;
}