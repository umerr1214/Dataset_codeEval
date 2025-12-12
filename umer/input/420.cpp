#include <iostream>
using namespace std;

double calculateArea(double sideLength) {
    if (sideLength < 0) {
        return -1; // Invalid input
    }
    return sideLength * sideLength;
}

double calculateArea(double length, double width) {
    if (length < 0 || width < 0) {
        return -1; // Invalid input
    }
    return length * width;
}

int main() {
    double side, length, width;
    
    cout << "Enter side length for square: ";
    cin >> side;
    
    double squareArea = calculateArea(side);
    if (squareArea < 0) {
        cout << "Error: Side length cannot be negative." << endl;
    } else {
        cout << "Square area: " << squareArea << endl;
    }
    
    cout << "Enter length and width for rectangle: ";
    cin >> length >> width;
    
    double rectangleArea = calculateArea(length, width);
    if (rectangleArea < 0) {
        cout << "Error: Length and width cannot be negative." << endl;
    } else {
        cout << "Rectangle area: " << rectangleArea << endl;
    }
    
    return 0;
}