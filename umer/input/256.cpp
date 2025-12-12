#include <iostream>
using namespace std;

int main() {
    int speed;
    bool isBirthday;
    
    cout << "Enter your speed: ";
    cin >> speed;
    cout << "Is it your birthday? (1 for yes, 0 for no): ";
    cin >> isBirthday;
    
    int result;
    
    // Adjust speed if it's birthday
    if (isBirthday) {
        speed -= 5; // Subtract 5 to account for birthday bonus
    }
    
    // Determine ticket type
    if (speed <= 60) {
        result = 0; // No ticket
    } else if (speed >= 61 && speed <= 80) {
        result = 1; // Small ticket
    } else {
        result = 2; // Big ticket
    }
    
    cout << "Result: " << result << endl;
    
    // Robustness issues:
    // - No input validation (what if user enters negative speed?)
    // - No handling of non-integer inputs
    // - No bounds checking on speed values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    // - No validation for boolean input (what if user enters 5 instead of 0/1?)
    
    return 0;
}