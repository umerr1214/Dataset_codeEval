#include <iostream>
using namespace std;

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;
    
    if (n >= 1) {
        cout << first << " ";
    }
    if (n >= 2) {
        cout << second << " ";
    }
    
    for (int i = 3; i <= n; i++) {
        // SEMANTIC ERROR: Using undefined variable 'nextNum' instead of 'next'
        nextNum = first + second;
        cout << nextNum << " ";
        first = second;
        second = nextNum;
    }
    cout << endl;
}

int main() {
    cout << "Fibonacci series for N = 10:" << endl;
    fibonacciSeries(10);
    
    cout << "Fibonacci series for N = 15:" << endl;
    fibonacciSeries(15);
    
    return 0;
}