#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message) {
    // Readability: Using a loop to print character by character instead of printing the whole string
    for (int i = 0; i < message.length(); ++i) {
        cout << message[i];
    }
    cout << endl;
}

int main() {
    printMessage("Hello, World!");
    return 0;
}