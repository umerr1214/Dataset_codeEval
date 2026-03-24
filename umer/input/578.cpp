#include <iostream>
using namespace std;

double calculateVolume(double sideLength) {
    return sideLength * sideLength; // Logical Error: Calculates area instead of volume
}

int main() {
    double side = 3.0;
    cout << "Volume: " << calculateVolume(side) << endl;
    return 0;
}