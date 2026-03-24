#include <iostream>
using namespace std;

// Square area function
double calculateArea(double sideLength) {
    return sideLength * sideLength;
}

// Rectangle area function (overloaded) - with logical error
double calculateArea(double length, double width) {
    return length + width;  // Wrong: using addition instead of multiplication
}

int main() {
    double len = 6.0, wid = 4.0;
    double area;
    
    cout << "Length: " << len << ", Width: " << wid << endl;
    area = calculateArea(len, wid);
    cout << "Rectangle Area: " << area << endl;
    
    return 0;
}