#include <iostream>
using namespace std;

double calculateArea(double sideLength) {
    double result = 0;
    for (int i = 0; i < sideLength; i++) {
        result += sideLength;
    }
    return result;
}

int main() {
    double side;
    cout << "Enter side length: ";
    cin >> side;
    cout << "Area: " << calculateArea(side) << endl;
    return 0;
}