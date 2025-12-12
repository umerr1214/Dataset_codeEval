#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message, int numTimes) {
    // Robustness Issue: Uses exact inequality != in while loop.
    // If numTimes is negative, this creates an infinite loop (until overflow),
    // causing a crash or hang.
    int i = 0;
    while (i != numTimes) {
        cout << message << endl;
        i++;
    }
}