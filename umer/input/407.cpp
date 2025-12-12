#include <iostream>
#include <cmath>
using namespace std;

void roundToNearestInteger(double x, int& y) {
    if (x >= INT_MIN && x <= INT_MAX) {
        y = round(x);
    } else {
        cout << "Error: Number out of range!" << endl;
        y = 0;
    }
}

int main() {
    double n;
    int r;
    
    cout << "Enter a floating-point number: ";
    cin >> n;
    
    roundToNearestInteger(n, r);
    
    cout << "Rounded value: " << r << endl;
    
    return 0;
}