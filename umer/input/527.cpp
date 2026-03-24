#include <iostream>
using namespace std;

void roundToNearestInteger(double num, int& roundedNum) {
    // Manual rounding implementation without using round() function
    if (num >= 0) {
        if (num - (int)num >= 0.5) {
            roundedNum = (int)num + 1;
        } else {
            roundedNum = (int)num;
        }
    } else {
        if ((int)num - num >= 0.5) {
            roundedNum = (int)num - 1;
        } else {
            roundedNum = (int)num;
        }
    }
}

int main() {
    double value = 3.7;
    int result;
    
    cout << "Original: " << value << endl;
    roundToNearestInteger(value, result);
    cout << "Rounded: " << result << endl;
    
    return 0;
}