#include <iostream>
using namespace std;

int main() {
    int speed;
    bool isBirthday;
    
    // Prompt user for input
    cout << "Enter your speed: ";
    cin >> speed;
    cout << "Is it your birthday? (1 for yes, 0 for no): ";
    cin >> isBirthday;
    
    int result;
    
    // Apply birthday bonus if applicable
    // Birthday allows 5 mph higher speed in all cases
    if (isBirthday) {
        speed -= 5; // Reduce effective speed for comparison
    }
    
    // Determine ticket type based on speed thresholds
    // 0 = no ticket (speed <= 60)
    // 1 = small ticket (speed 61-80)
    // 2 = big ticket (speed >= 81)
    if (speed <= 60) {
        result = 0; // No ticket
    } else if (speed >= 61 && speed <= 80) {
        result = 1; // Small ticket
    } else {
        result = 2; // Big ticket
    }
    
    // Display the result
    cout << "Result: " << result << endl;
    
    return 0;
}