#include <iostream>
using namespace std;

void swapIntegers(int& a, int& b) {
    // Inefficient XOR swap method that's hard to read
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapIntegers(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}