#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double length, width;
    double area, perimeter;
    
    cout << "Enter the length of rectangle: ";
    cin >> length;
    
    cout << "Enter the width of rectangle: ";
    cin >> width;
    
    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);
    
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;
    
    // Clear screen
    system("cls");
    
    // System pause
    system("pause");
    
    // No input validation for negative values
    // No error handling for invalid input types
    // No bounds checking for extremely large values
    // Assumes user will always enter valid numeric input
    
    return 0;
}