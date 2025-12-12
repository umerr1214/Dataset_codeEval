#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    cout << "Square roots of the first 25 odd positive integers:" << endl;
    
    int count = 0;
    int num = 1;
    
    while (count < 25) {
        if (num % 2 == 1) { // Check if number is odd
            string sqrtValue = sqrt(num); // Semantic error: assigning double to string
            cout << "sqrt(" << num << ") = " << sqrtValue << endl;
            count++;
        }
        num++;
    }
    
    return 0;
}