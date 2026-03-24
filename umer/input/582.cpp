#include <iostream>
using namespace std;

// Correct version
double calculateVolume(double sideLength) {
    if (sideLength < 0) return 0.0; // Basic handling, though robust version might throw or handle differently
    return sideLength * sideLength * sideLength;
}

int main() {
    double side = 3.0;
    cout << "Volume: " << calculateVolume(side) << endl;
    return 0;
}