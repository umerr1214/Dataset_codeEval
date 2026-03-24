#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message) {
    cout << "Message: " << endl; // Logic error: Doesn't print the message
}

int main() {
    printMessage("Hello, World!");
    return 0;
}