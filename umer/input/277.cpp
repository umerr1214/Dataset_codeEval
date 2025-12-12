#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Square roots of the first 25 odd positive integers:" << endl;
    
    int count = 0;
    int num = 1;
    
    while (count < 25) {
        if (num % 2 == 1) { // Check if number is odd
            double sqrtValue = sqrt(num);
            cout << "sqrt(" << num << ") = " << sqrtValue << endl;
            count++;
        }
        num++;
    }
    
    return 0  // Missing semicolon - syntax error
}