#include <iostream>
using namespace std;

double calculateVolume(double length, double width, double height) {
    // Readability/Efficiency Issue: Storing each intermediate multiplication in a new variable
    // is unnecessarily verbose and consumes more memory (though compiler optimization fixes this).
    double step1 = length * width;
    double step2 = step1 * height;
    double volume = step2;
    return volume;
}