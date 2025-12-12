#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message) {
    // Semantic Error: Prints the length of the string instead of the string itself.
    // The code compiles and runs, but performs the wrong action based on the requirements.
    cout << message.length() << endl;
}