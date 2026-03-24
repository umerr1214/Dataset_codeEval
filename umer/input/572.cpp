#include <iostream>
#include <string>
using namespace std;

// Base version
void printMessage(const string& message) {
    cout << message << endl;
}

// Overloaded version with logical error
void printMessage(const string& message, int numTimes) {
    // Logic Error: Loop starts at 1 and goes up to numTimes, so it executes numTimes - 1 times
    // Or if numTimes is 0, it doesn't execute (which is correct), but for 1 it won't execute.
    // Actually, usually loops are 0 to <numTimes. 
    // Here let's make it print one less time than requested
    for (int i = 1; i < numTimes; i++) {
        cout << message << endl;
    }
}

int main() {
    printMessage("Hello", 3);
    return 0;
}