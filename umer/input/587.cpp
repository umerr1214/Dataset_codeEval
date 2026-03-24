#include <iostream>
#include <cmath>
using namespace std;

// Base function
double calculateVolume(double sideLength) {
    return sideLength * sideLength * sideLength;
}

// Overloaded function with readability/efficiency issue
double calculateVolume(double length, double width, double height) {
    // Readability: Unnecessary use of temporary variables and overly complex calculation
    double area = length * width;
    double vol = area * height;
    double result = pow(vol, 1); // Redundant power calculation
    return result;
}

int main() {
    double s = 3.0;
    double l = 2.0, w = 3.0, h = 4.0;
    cout << "Cube Volume: " << calculateVolume(s) << endl;
    cout << "Prism Volume: " << calculateVolume(l, w, h) << endl;
    return 0;
}