#include <iostream>
#include <string>
using namespace std;

// Base version
void printMessage(const string& message) {
    cout << message << endl;
}

// Overloaded version - Correct implementation
void printMessage(const string& message, int numTimes) {
    for (int i = 0; i < numTimes; i++) {
        cout << message << endl;
    }
}

int main() {
    printMessage("Hello", 3);
    return 0;
}