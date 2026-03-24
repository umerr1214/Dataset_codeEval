#include <iostream>
#include <string>
using namespace std;

// Base version
void printMessage(const string& message) {
    cout << message << endl;
}

// Overloaded version with robustness issue
void printMessage(const string& message, int numTimes) {
    // Robustness Issue: No check for negative numTimes, which could lead to infinite loops if loop condition was i != numTimes,
    // or just generally unexpected behavior (printing nothing without error).
    // Here using a simple for loop it just won't print, but better to handle or assert positive.
    for (int i = 0; i < numTimes; i++) {
        cout << message << endl;
    }
}

int main() {
    printMessage("Hello", -5);
    return 0;
}