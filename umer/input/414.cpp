#include <iostream>
using namespace std;

double calculateArea(double sideLength) {
    if (sideLength < 0) {
        return -1; // Invalid input
    }
    return sideLength * sideLength;
}

int main() {
    double side;
    cout << "Enter side length: ";
    cin >> side;
    
    double area = calculateArea(side);
    if (area < 0) {
        cout << "Error: Side length cannot be negative." << endl;
    } else {
        cout << "Area: " << area << endl;
    }
    
    return 0;
}