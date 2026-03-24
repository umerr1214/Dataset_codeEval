#include <iostream>
using namespace std;

double calculateVolume(double sideLength) {
    return sideLength * sideLength * sideLength
}

int main() {
    double side = 3.0;
    cout << "Volume: " << calculateVolume(side) << endl;
    return 0;
}