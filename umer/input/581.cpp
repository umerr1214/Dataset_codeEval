#include <iostream>
#include <cmath>
using namespace std;

double calculateVolume(double sideLength) {
    double temp1 = sideLength;
    double temp2 = pow(temp1, 2);
    double temp3 = temp2 * sideLength;
    return temp3; // Readability: Unnecessary temporary variables and use of pow()
}

int main() {
    double side = 3.0;
    cout << "Volume: " << calculateVolume(side) << endl;
    return 0;
}