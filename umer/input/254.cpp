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
        speed += 5; // Logical error: should subtract 5, not add 5
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
    
    return 0;
}