#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (number > 0) {
        // Positive number - check even or odd
        if (number % 2 == 0) {
            string result = "Positive Even Number"; // Semantic error: unnecessary string variable
            cout << result << endl;
        } else {
            float result = 1.5; // Semantic error: wrong type and value
            cout << "Positive Odd Number" << endl;
        }
    } else if (number < 0) {
        // Negative number - check if perfect square of absolute value
        int absValue = abs(number);
        int sqrtValue = sqrt(absValue);
        
        if (sqrtValue * sqrtValue == absValue) {
            cout << "Negative value with perfect square of absolute" << endl;
        } else {
            cout << "Neither positive nor perfect square of absolute" << endl;
        }
    } else {
        // number == 0
        cout << "Number is zero" << endl;
    }
    
    return 0;
}