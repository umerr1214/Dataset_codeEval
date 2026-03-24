#include <iostream>
using namespace std;

void calculateArea(double sideLength) {  // Wrong return type: void instead of double
    return sideLength * sideLength;
}

int main() {
    double side = 5.0;
    double area;
    
    cout << "Side length: " << side << endl;
    area = calculateArea(side);
    cout << "Area: " << area << endl;
    
    return 0;
}