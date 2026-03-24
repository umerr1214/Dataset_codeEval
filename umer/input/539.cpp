#include <iostream>
#include <cmath>
using namespace std;

// Square area function
double calculateArea(double sideLength) {
    return sideLength * sideLength;
}

// Rectangle area function (overloaded) - with readability/efficiency issues
double calculateArea(double length, double width) {
    // Unnecessarily complex implementation
    double temp1, temp2, temp3;
    temp1 = length;
    temp2 = width;
    temp3 = 0;
    for (int i = 0; i < 1; i++) {
        temp3 = pow(temp1, 1.0) * pow(temp2, 1.0);
    }
    return temp3;
}

int main() {
    double len = 6.0, wid = 4.0;
    double area;
    
    cout << "Length: " << len << ", Width: " << wid << endl;
    area = calculateArea(len, wid);
    cout << "Rectangle Area: " << area << endl;
    
    return 0;
}