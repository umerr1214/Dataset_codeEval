#include <iostream>
using namespace std;

// Base function
double calculateVolume(double sideLength) {
    return sideLength * sideLength * sideLength;
}

// Overloaded function with semantic error
int calculateVolume(double length, double width, double height) { // Semantic Error: Returns int instead of double
    return length * width * height;
}

int main() {
    double s = 3.0;
    double l = 2.0, w = 3.0, h = 4.0;
    cout << "Cube Volume: " << calculateVolume(s) << endl;
    cout << "Prism Volume: " << calculateVolume(l, w, h) << endl;
    return 0;
}