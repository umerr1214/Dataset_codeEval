#include <iostream>
#include <string>
using namespace std;

// Base version
void printMessage(const string& message) {
    cout << message << endl;
}

// Overloaded version with readability issue
void printMessage(const string& message, int numTimes) {
    // Readability: Using recursion unnecessarily for a simple iteration
    if (numTimes > 0) {
        cout << message << endl;
        printMessage(message, numTimes - 1);
    }
}

int main() {
    printMessage("Hello", 3);
    return 0;
}