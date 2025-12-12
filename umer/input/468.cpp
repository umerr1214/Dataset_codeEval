#include <iostream>
using namespace std;

double calculateVolume(double length, double width, double height) {
    if (length < 0 || width < 0 || height < 0) {
        return 0;
    }
    return length * width * height;
}