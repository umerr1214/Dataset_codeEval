#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message) {
    // Logical Error: Prints the string literal "message" instead of the variable content.
    cout << "message" << endl;
}