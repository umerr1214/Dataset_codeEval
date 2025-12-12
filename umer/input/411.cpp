#include <iostream>
using namespace std;

int calculateArea(double sideLength) {
    return sideLength * sideLength;
}

int main() {
    double side;
    cout << "Enter side length: ";
    cin >> side;
    cout << "Area: " << calculateArea(side) << endl;
    return 0;
}