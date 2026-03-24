#include <iostream>
#include <string>
using namespace std;

// Semantic Error: Incorrect parameter type (passed by value instead of const reference)
void printMessage(string message) {
    cout << message << endl;
}

int main() {
    printMessage("Hello, World!");
    return 0;
}