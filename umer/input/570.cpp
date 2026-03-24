#include <iostream>
#include <string>
using namespace std;

void printMessage(const string& message) {
    cout << message << endl;
}

int main() {
    printMessage("Hello, World!");
    return 0;
}