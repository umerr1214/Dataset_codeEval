#include <iostream>
#include <string>
using namespace std;

int main() {
    int speed;
    bool isBirthday;
    
    cout << "Enter your speed: ";
    cin >> speed;
    cout << "Is it your birthday? (1 for yes, 0 for no): ";
    cin >> isBirthday;
    
    string result; // Semantic error: should be int, not string
    
    // Adjust speed if it's birthday
    if (isBirthday) {
        speed -= 5; // Subtract 5 to account for birthday bonus
    }
    
    // Determine ticket type
    if (speed <= 60) {
        result = 0; // Type mismatch: assigning int to string
    } else if (speed >= 61 && speed <= 80) {
        result = 1;
    } else {
        result = 2;
    }
    
    cout << "Result: " << result << endl;
    
    return 0;
}