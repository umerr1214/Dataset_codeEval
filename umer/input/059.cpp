#include <iostream>
using namespace std;

// ❌ READABILITY ISSUE: Poor function name and no comments
int** f1(int& r, int& c) {
cout << "Enter total rows: ";
cin >> r;
cout << "Enter total columns: ";
cin >> c;
    
    // ❌ EFFICIENCY ISSUE: Inefficient nested loop for allocation
    int** m = new int*[r];
    for (int i = 0; i < r; i++) {
        m[i] = new int[c];
        // ❌ EFFICIENCY ISSUE: Unnecessary initialization here instead of separate function
        for (int j = 0; j < c; j++) {
            m[i][j] = 0;
        }
    }
    
    return m;
}

// ❌ READABILITY ISSUE: Cryptic function name and poor formatting
void f2(int** m, const int& r, const int& c) {
// ❌ READABILITY ISSUE: No proper indentation and spacing
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
m[i][j]=0;
}
}
}

// ❌ READABILITY ISSUE: Single letter variable names
void f3(int** m, const int& r, const int& c) {
    cout << "The array is:" << endl;
    // ❌ EFFICIENCY ISSUE: Redundant endl usage instead of \n
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;  // ❌ EFFICIENCY ISSUE: endl flushes buffer unnecessarily
    }
}

// ❌ READABILITY ISSUE: Inline function with poor naming
inline void f4(int** m, const int& r) {
    // ❌ EFFICIENCY ISSUE: Could use range-based loop or better approach
    for (int i = 0; i < r; i++) {
        delete[] m[i];
    }
    delete[] m;
}

// ❌ READABILITY ISSUE: Terrible function name and variable names
int* f5(int** m, const int& r, const int& c) {
    int* s = new int[c];
    
    // ❌ EFFICIENCY ISSUE: Inefficient nested loop order
    for (int j = 0; j < c; j++) {
        s[j] = 0;
        for (int i = 0; i < r; i++) {
            s[j] += m[i][j];  // ❌ EFFICIENCY ISSUE: Poor cache locality
        }
    }
    
    return s;
}

// ❌ READABILITY ISSUE: Meaningless function name
int* f6(int** m, const int& r, const int& c) {
    // ❌ EFFICIENCY ISSUE: Redundant calculation
    int x = (r < c) ? r : c;
    int* d = new int[x];
    
    // ❌ EFFICIENCY ISSUE: Could be optimized
    for (int i = 0; i < x; i++) {
        d[i] = m[i][i];
    }
    
    return d;
}

int main() {
    int r, c;  // ❌ READABILITY ISSUE: Single letter variable names
    
    // ❌ READABILITY ISSUE: No comments explaining what's happening
    int** m = f1(r, c);
    
    f2(m, r, c);
    
    f3(m, r, c);
    
    // ❌ READABILITY ISSUE: Poor variable naming
    int* s = f5(m, r, c);
    cout << "Column sums: ";
    for (int j = 0; j < c; j++) {
        cout << s[j] << " ";
    }
    cout << endl;
    
    // ❌ EFFICIENCY ISSUE: Recalculating same value
    int x = (r < c) ? r : c;
    int* d = f6(m, r, c);
    cout << "Diagonal elements: ";
    for (int i = 0; i < x; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    
    // ❌ READABILITY ISSUE: No clear separation of cleanup code
    delete[] s;delete[] d;f4(m, r);  // ❌ READABILITY ISSUE: Multiple statements on one line
    
    return 0;
}