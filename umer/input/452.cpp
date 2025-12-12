#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message, int numTimes) {
    // Logical Error: Loop condition is incorrect.
    // 'i > numTimes' will be false immediately for any positive numTimes,
    // so the loop never executes.
    for (int i = 0; i > numTimes; i++) {
        cout << message << endl;
    }
}