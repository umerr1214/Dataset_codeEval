#include <iostream>
using namespace std;

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;
    
    // ROBUSTNESS ISSUE: No validation for negative or zero input
    if (n >= 1) {
        cout << first << " ";
    }
    if (n >= 2) {
        cout << second << " ";
    }
    
    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    cout << "Fibonacci series for N = 10:" << endl;
    fibonacciSeries(10);
    
    cout << "Fibonacci series for N = 15:" << endl;
    fibonacciSeries(15);
    
    // ROBUSTNESS ISSUE: No handling of edge cases or invalid inputs
    return 0;
}