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
    
    // Logical errors in formulas
    area = length + width;  // Should be length * width
    perimeter = length * width;  // Should be 2 * (length + width)
    
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;
    
    // Clear screen
    system("cls");
    
    // System pause
    system("pause");
    
    return 0;
}