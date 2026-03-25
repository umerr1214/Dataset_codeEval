#include <iostream>
#include <cctype>
using namespace std;

// ❌ SEMANTIC ERROR: Wrong return type - should return char** but returns int**
int** AllocateMemory(int& rows, int& cols) {
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    // ❌ SEMANTIC ERROR: Creating int** instead of char**
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    
    return matrix;
}

// ❌ SEMANTIC ERROR: Parameter type mismatch - should be char** but using int**
void InputMatrix(int** matrix, const int rows, const int cols) {
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char temp;
            cin >> temp;
            matrix[i][j] = temp;  // ❌ SEMANTIC ERROR: Storing char in int array
        }
    }
}

// ❌ SEMANTIC ERROR: Parameter type mismatch
void DisplayMatrix(int** matrix, const int& rows, const int& cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << (char)matrix[i][j] << " ";  // ❌ SEMANTIC ERROR: Casting int to char
        }
        cout << endl;
    }
}

// ❌ SEMANTIC ERROR: Parameter type mismatch
void SeparateCharacters(int** matrix, const int& rows, const int& cols, 
                       char*& alphabets, char*& numbers, char*& specialChars,
                       int& alphaCount, int& numCount, int& specialCount) {
    
    // First pass: count elements
    alphaCount = numCount = specialCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char ch = (char)matrix[i][j];  // ❌ SEMANTIC ERROR: Casting int to char
            if (isalpha(ch)) {
                alphaCount++;
            } else if (isdigit(ch)) {
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
    
    // Second pass: fill arrays
    int aIndex = 0, nIndex = 0, sIndex = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char ch = (char)matrix[i][j];  // ❌ SEMANTIC ERROR: Casting int to char
            if (isalpha(ch)) {
                alphabets[aIndex++] = ch;
            } else if (isdigit(ch)) {
                numbers[nIndex++] = ch;
            } else {
                specialChars[sIndex++] = ch;
            }
        }
    }
}

int main() {
    int rows, cols;
    
    // ❌ SEMANTIC ERROR: Type mismatch in assignment
    int** matrix = AllocateMemory(rows, cols);  // Should be char**
    
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