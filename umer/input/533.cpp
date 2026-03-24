#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double sideLength) {
    // Inefficient approach using pow function for simple multiplication
    double result;
    result = pow(sideLength, 2.0);
    return result;
}

int main() {
    double side = 5.0;
    double area;
    
    cout << "Side length: " << side << endl;
    area = calculateArea(side);
    cout << "Area: " << area << endl;
    
    return 0;
}