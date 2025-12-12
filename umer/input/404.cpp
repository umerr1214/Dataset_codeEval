#include <iostream>
#include <cmath>
using namespace std;

void roundToNearestInteger(double num, int& roundedNum) {
    roundedNum = floor(num);
}

int main() {
    double number;
    int rounded;
    
    cout << "Enter a floating-point number: ";
    cin >> number;
    
    roundToNearestInteger(number, rounded);
    
    cout << "Rounded value: " << rounded << endl;
    
    return 0;
}