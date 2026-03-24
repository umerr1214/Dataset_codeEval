#include <iostream>
#include <string>
using namespace std;

// Base version
void printMessage(const string& message) {
    cout << message << endl;
}

// Overloaded version with semantic error
int printMessage(const string& message, int numTimes) { // Semantic Error: Returns int instead of void
    for (int i = 0; i < numTimes; i++) {
        cout << message << endl;
    }
    return 0;
}

int main() {
    printMessage("Hello", 3);
    return 0;
}