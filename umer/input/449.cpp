#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message) {
    // Readability/Efficiency Issue: Printing character by character is less efficient
    // and more verbose than printing the whole string at once.
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        cout << c;
    }
    cout << endl;
}