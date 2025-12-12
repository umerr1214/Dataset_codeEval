#include <iostream>
using namespace std;

double calculateArea(double sideLength) {
    return sideLength * sideLength;
}

double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double side, length, width;
    
    cout << "Enter side length for square: ";
    cin >> side;
    cout << "Square area: " << calculateArea(side) << endl;
    
    cout << "Enter length and width for rectangle: ";
    cin >> length >> width;
    cout << "Rectangle area: " << calculateArea(length, width) << endl;
    
    return 0;
}