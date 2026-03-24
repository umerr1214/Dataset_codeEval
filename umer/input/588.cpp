#include <iostream>
using namespace std;

// Base function
double calculateVolume(double sideLength) {
    if (sideLength < 0) return 0.0;
    return sideLength * sideLength * sideLength;
}

// Overloaded function - Correct implementation
double calculateVolume(double length, double width, double height) {
    if (length < 0 || width < 0 || height < 0) return 0.0;
    return length * width * height;
}

int main() {
    double s = 3.0;
    double l = 2.0, w = 3.0, h = 4.0;
    cout << "Cube Volume: " << calculateVolume(s) << endl;
    cout << "Prism Volume: " << calculateVolume(l, w, h) << endl;
    return 0;
}