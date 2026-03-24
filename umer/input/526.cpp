#include <iostream>
#include <cmath>
using namespace std;

void roundToNearestInteger(double num, int& roundedNum) {
    roundedNum = round(num);
}

int main() {
    double value = 3.7;
    int result;
    
    cout << "Original: " << value << endl;
    roundToNearestInteger(value, result);
    cout << "Rounded: " << result << endl;
    
    return 0;
}