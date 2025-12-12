#include <iostream>
using namespace std;

void printDiagonal() {
    int numberOfRows;
    cout << "Enter number of rows: ";
    cin >> numberOfRows;
    
    // Validate input
    if (numberOfRows <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
        return;
    }
    
    int currentNumber = 1;
    
    // Print diagonal pattern excluding multiples of 3
    for (int row = 0; row < numberOfRows; row++) {
        for (int col = 0; col <= row; col++) {
            // Skip multiples of 3
            while (currentNumber % 3 == 0) {
                currentNumber++;
            }
            cout << currentNumber << endl;
            currentNumber++;
        }
        cout << endl;
    }
}

int main() {
    printDiagonal();
    return 0;
}