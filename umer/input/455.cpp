#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message, int numTimes) {
    // Readability/Efficiency Issue: Recursion is unnecessary overhead for this simple task
    // and can cause stack overflow for large numTimes.
    if (numTimes <= 0) return;
    cout << message << endl;
    printMessage(message, numTimes - 1);
}