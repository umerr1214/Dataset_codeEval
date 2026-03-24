#include <iostream>
#include <string>
using namespace std;

// Base version
void printMessage(const string& message) {
    cout << message << endl;
}

// Overloaded version with syntax error
void printMessage(const string& message, int numTimes) {
    for (int i = 0; i < numTimes; i++) {
        cout << message << endl;
    }
    // Missing closing brace for the function
