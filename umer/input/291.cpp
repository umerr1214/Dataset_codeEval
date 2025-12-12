#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice = 1;
    
    while (choice == 1) {
        int number;
        string factorial = 1; // Semantic error: should be long long, not string
        
        cout << "Enter a number: ";
        cin >> number;
        
        // Calculate factorial
        for (int i = 1; i <= number; i++) {
            factorial *= i; // Type mismatch: multiplying string by int
        }
        
        cout << "Factorial of " << number << " is " << factorial << endl;
        
        cout << "Do you want to calculate another factorial? (1 for yes, 0 for no): ";
        cin >> choice;
    }
    
    cout << "Program terminated." << endl;
    
    return 0;
}