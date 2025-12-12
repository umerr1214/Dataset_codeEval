#include <iostream>
using namespace std;

int main() {
    int choice = 1;
    
    while (choice == 1) {
        int number;
        long long factorial = 1;
        
        cout << "Enter a number: ";
        cin >> number;
        
        // Calculate factorial
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        
        cout << "Factorial of " << number << " is " << factorial << endl;
        
        cout << "Do you want to calculate another factorial? (1 for yes, 0 for no): ";
        cin >> choice;
    }
    
    cout << "Program terminated." << endl  // Missing semicolon - syntax error
    
    return 0;
}