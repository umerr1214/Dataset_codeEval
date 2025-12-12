#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message, int numTimes) {
    // Semantic Error: Prints the loop iteration number instead of the actual message.
    // The code logic runs but produces output that doesn't match the requirements.
    for (int i = 0; i < numTimes; i++) {
        cout << i << endl;
    }
}