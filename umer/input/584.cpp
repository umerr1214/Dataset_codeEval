#include <iostream>
using namespace std;

// Base function
double calculateVolume(double sideLength) {
    return sideLength * sideLength * sideLength;
}

// Overloaded function with logical error
double calculateVolume(double length, double width, double height) {
    return length + width + height; // Logical Error: Calculates sum instead of volume (product)
}

int main() {
    double s = 3.0;
    double l = 2.0, w = 3.0, h = 4.0;
    cout << "Cube Volume: " << calculateVolume(s) << endl;
    cout << "Prism Volume: " << calculateVolume(l, w, h) << endl;
    return 0;
}