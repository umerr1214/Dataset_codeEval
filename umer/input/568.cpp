#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message) {
    if (message.length() > 1000) return; // Robustness: Arbitrary length limit without reporting error
    cout << message << endl;
}

int main() {
    printMessage("Hello, World!");
    return 0;
}