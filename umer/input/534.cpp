#include <iostream>
using namespace std;

double calculateArea(double sideLength) {
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