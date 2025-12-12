#include <iostream>
using namespace std;

/**
 * Prints the first n numbers of the Fibonacci sequence
 * The Fibonacci sequence starts with 0, 1 and each subsequent number
 * is the sum of the two preceding numbers: 0, 1, 1, 2, 3, 5, 8, 13, ...
 * 
 * @param n The number of Fibonacci numbers to print (must be positive)
 */
void fibonacciSeries(int n) {
    // Input validation
    if (n <= 0) {
        cout << "Error: Please enter a positive number." << endl;
        return;
    }
    
    int first = 0, second = 1, next;
    
    // Handle the first number (0)
    if (n >= 1) {
        cout << first << " ";
    }
    
    // Handle the second number (1)
    if (n >= 2) {
        cout << second << " ";
    }
    
    // Generate and print the remaining numbers
    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << next << " ";
        
        // Update for next iteration
        first = second;
        second = next;
    }
    
    cout << endl;
}

int main() {
    cout << "=== Fibonacci Series Generator ===" << endl;
    
    // Test case 1: N = 10
    cout << "Fibonacci series for N = 10:" << endl;
    fibonacciSeries(10);
    cout << endl;
    
    // Test case 2: N = 15
    cout << "Fibonacci series for N = 15:" << endl;
    fibonacciSeries(15);
    cout << endl;
    
    // Additional test cases to demonstrate robustness
    cout << "Testing edge cases:" << endl;
    
    cout << "N = 1: ";
    fibonacciSeries(1);
    
    cout << "N = 2: ";
    fibonacciSeries(2);
    
    cout << "N = 0: ";
    fibonacciSeries(0);
    
    cout << "N = -5: ";
    fibonacciSeries(-5);
    
    return 0;
}