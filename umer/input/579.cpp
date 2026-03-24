#include <iostream>
using namespace std;

int calculateVolume(double sideLength) { // Semantic Error: Returns int instead of double
    return sideLength * sideLength * sideLength;
}

int main() {
    double side = 1.5;
    cout << "Volume: " << calculateVolume(side) << endl;
    return 0;
}