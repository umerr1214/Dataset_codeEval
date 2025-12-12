#include <iostream>
using namespace std;

// READABILITY ISSUE: Poor function name and no comments
void func(int x) {
    // READABILITY ISSUE: Poor variable names
    int a = 0, b = 1, c;
    
    if (x >= 1) {
        cout << a << " ";
    }
    if (x >= 2) {
        cout << b << " ";
    }
    
    // EFFICIENCY ISSUE: Could use more efficient algorithms for large numbers
    int counter = 3;
    while (counter <= x) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        counter++;
    }
    cout << endl;
}

int main() {
    // READABILITY ISSUE: No clear explanation of what's happening
    cout << "Fibonacci series for N = 10:" << endl;
    func(10);
    
    cout << "Fibonacci series for N = 15:" << endl;
    func(15);
    
    return 0;
}