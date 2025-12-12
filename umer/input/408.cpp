#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void roundToNearestInteger(double num, int& roundedNum) {
    if (num >= INT_MIN && num <= INT_MAX) {
        roundedNum = round(num);
    } else {
        cout << "Error: Number out of range!" << endl;
        roundedNum = 0;
    }
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