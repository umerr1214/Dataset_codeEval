#include <iostream>
using namespace std;

double calculateVolume(double sideLength) {
    if (sideLength < 0) return 0; // Handle invalid input
    return sideLength * sideLength * sideLength;
}